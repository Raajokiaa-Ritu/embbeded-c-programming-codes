#include<reg51.h>
sbit seg1 = P3^0; 
sbit seg2 = P3^1;
sbit seg3 = P3^2;
sbit seg4 = P3^3; 
sbit seg5 = P3^4; 
sbit seg6 = P3^5; 
void delay ();
void main () {
	seg1 = seg2 = seg3 = seg4 = seg5 = seg6 = 0; 
	while (1) {
		seg1 = 1;
		P2 = 0xc0;
		delay (); 
		seg1 = 0;
		seg2 = 1;
		P2 = 0x30;
		delay (); 
		seg2 = 0;
		seg3 = 1; 
		P2 = 0xc0;
		delay (); 
		seg3 = 0;
		seg4 = 1;
		P2 = 0x79;
		delay (); 
		seg4 = 0;
		seg5 = 1;
		P2 = 0xa4;
		delay (); 
		seg5 = 0;
		seg6 = 1;
		P2 = 0xf9;
		delay (); 
		seg6 = 0;
	}
}
void delay () { 
	unsigned int value;
	for (value=0; value<1000; value++);
}
