#include<reg51.H>
sbit seg1 = P1^0; 
sbit seg2 = P1^1; 
sbit seg3 = P1^2;
sbit seg4 = P1^3; 
void delay ();
void main ()
{
	seg1 = seg2 = seg3 = seg4 = 0; 
	while (1)
	{
		seg1 = 1;
		P2 = 0xf9;
		delay (); 
		seg1 = 0;
		seg2 = 1;
		P2 = 0xa4;
		delay (); 
		seg2 = 0;
		seg3 = 1; 
		P2 = 0x92;
		delay (); 
		seg3 = 0;
		seg4 = 1;
		P2 = 0x80;
		delay (); 
		seg4 = 0;
	}
}
void delay ()
{
	unsigned int value;
	for (value=0; value<1000; value++);
}
