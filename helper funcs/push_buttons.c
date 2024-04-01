#include "globals.h"

volatile int* PUSH_BUTTONS = (int *) 0xFF200050;
volatile int* EDGE_CAP = (int *) 0xFF20005C;
volatile int* LED_BASE = 0xFF200000;

void read_buttons()
{
    int capture = *EDGE_CAP;
	
    if((capture & 0b0001)>0)
    {
        new_normal_cat();
        *(PUSH_BUTTONS+3) = 0b0001; //writing 1 to bit clears it 
		(*LED_BASE) = 0b0001;
		for(int i = 0; i < 1000000; i++);
    }
    if((capture & 0b0010)>0)
    {
        new_tank_cat(); 
        *(PUSH_BUTTONS+3) = 0b0010; //writing 1 to bit clears it 
		(*LED_BASE) = 0b0010;
		for(int i = 0; i < 1000000; i++);
    }
    if((capture & 0b0100)>0)
    {
        new_axe_cat(); 
        *(PUSH_BUTTONS+3) = 0b0100; //writing 1 to bit clears it 
		(*LED_BASE) = 0b0100;
		for(int i = 0; i < 1000000; i++);
    }
    if((capture & 0b1000)>0)
    {
        new_ninja_cat(); 
        *(PUSH_BUTTONS+3) = 0b1000; //writing 1 to bit clears it 
		(*LED_BASE) = 0b1000;
		for(int i = 0; i < 1000000; i++);
    }
	//need to add key for tall cat
}

int main()
{
	*EDGE_CAP = 0b0000;
	while(1)
	{
		read_buttons();	
	}
}