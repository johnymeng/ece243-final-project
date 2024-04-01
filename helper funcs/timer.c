#include "globals.h"

volatile int* TIMER = (int *) 0xFF202000;

void init_timer() //timer is 100MHz
{
    //at 0xFF202008, timer holders "count down" value
    int one_sixtieth = 1666667;
    *(TIMER + 2) = one_sixtieth; //inits timer to count down 1/60ths of a second
    *(TIMER + 3) = one_sixtieth >> 16;

    //configures timer to run continuously and turns start on
    *(TIMER+1) = 0b110;

    //starts timer
    *(TIMER) = 0b10;
}

void read_timer()
{
    int TO = *(TIMER); //gets value of base address of timer, TO is bit 0 of base
    if((TO & 0b1) > 0) //checks to see if TO bit is high
    {
        //increment "counter" values here, we will set signals to change once they reach a certain value
        //ig if we want something to happen once every second, we increment the counter here
        //in the "main" function, once the counter reachs 60, we do some action

        *(TIMER) = 0b10; //resets TO bit for timer
    }
}

