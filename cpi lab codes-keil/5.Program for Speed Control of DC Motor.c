#include<reg51.h>
sbit motor = P2^0; 
sbit sw1 = P1^0; 
sbit sw2 = P1^1;
sbit sw3 = P1^2;
sbit sw4 = P1^3;
void delay (unsigned int); 
void main () {
	unsigned int V1;
	motor = 0;
	while (1) {
		if (sw1==0) {
			for (V1=0; V1<200; V1++)
			{
			motor = 1;
			delay (10);
			motor = 0;
			delay (10);
			}
		}
		if (sw2==0) {
			for (V1=0; V1<200; V1++)
			{
			motor = 1;
			delay (50);
			motor = 0;
			delay (5);
			}
		}
		if (sw3==0) {
			motor = 1;
		}
		if (sw4==0) { 
			motor = 0;
		}
	}
}
void delay (unsigned int value) { 
	unsigned int V2, v3;
	for (V2=0; V2<value; V2++) 
	for (v3=0; v3<value; v3++);
}
