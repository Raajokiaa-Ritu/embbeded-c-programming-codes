#include<reg51.h>
sbit motp = P1^0; 
sbit motn = P1^1;
void main ()
{
	unsigned int i; 
	motp = motn =0;
	while (1) 
	{
		motp = 1;
		motn = 0;
		for (i=0; i<60000; i++);
		motp=0; 
		motn=1;
		for (i=0; i<60000; i++);	
	}
}

