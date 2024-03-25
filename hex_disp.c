volatile int *HEX_BASE1 = (int *) 0xff200020;
volatile int *HEX_BASE2 = (int *) 0xff200030;

static const short int hex_disp[10] = 
{
   0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110, 0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01100111
};

int player_money = 0;
void disp_money()
{
  int money = player_money, temp, shifts = 0;
  while(money > 0)
  {
    temp = hex_disp[money % 10];
    for(int i = 0; i < shifts; i++)
    {
      temp << 7;
    }
	//temp = *(HEX_BASE1) + temp;
//temp >> 14;
    *(HEX_BASE1) = temp;
    money /= 10;
    shifts++;
  }
}

void disp_money_2()
{
  int money = player_money, temp, shifts = 0;
  while(money > 0)
  {
	 if(money > 1000)
	 {	
		 *(HEX_BASE1) = hex_disp[money % 10] ;
			*(HEX_BASE1) += hex_disp[(money / 10) % 10] << 8;
	  		*(HEX_BASE1) += hex_disp[(money / 100) % 10] << 16 ;
	  	   *(HEX_BASE1) += hex_disp[(money / 1000) % 10]<< 24;
	 }  
  }
}


int main()
{
	player_money = 0;
	while(1)
	{
		for(int i = 0; i < 9999; i++)
			{
				player_money = i;
		disp_money_2();		
			}
	}
	
	int temp = hex_disp[3] >> 0;
	//*(HEX_BASE1) = temp;
	//*(HEX_BASE1) += hex_disp[8] << 7;
	//*(HEX_BASE1) += hex_disp[5] << 16;
	//*(HEX_BASE1) += hex_disp[2] << 24;
}