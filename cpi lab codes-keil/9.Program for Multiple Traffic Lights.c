#include<reg51.h>
sbit red1 = P1^2;
sbit yellow1 = P1^1;
sbit greeN1 = P1^0; 
sbit red2 = P1^3; 
sbit yellow2 = P1^4; 
sbit greeN2 = P1^5; 
sbit red3 = P2^0; 
sbit yellow3 = P2^1;
sbit green3 = P2^2;
sbit red4 = P2^3; 
sbit yellow4 = P2^4;
sbit green4 = P2^5;
void main () {
	unsigned int i;
	red1 = yellow1 = greeN1 = 0; 
	red2 = yellow2 = greeN2 = 0; 
	red3 = yellow3 = green3 = 0; 
	red4 = yellow4 = green4 = 0;
	while (1) {
		red1 = 1;
		red2 = 1;
		red3 = 1;
		green4 = 1;
		yellow4 = 0;
		red4 = 0;
		{
			for (i=0; i<60000; i++); 
			for (i=0; i<60000; i++);
		}
		green4 = 0;
		yellow4 = 1;
		{
		for (i=0; i<40000; i++); 
		for (i=0; i<40000; i++);
		}
		yellow4 = 0;
		red4 = 1;
		red3 = 0;
		green3 = 1;
		{
			for (i=0; i<60000; i++); 
			for (i=0; i<60000; i++);
		}
		green3 = 0;
		yellow3 = 1;
		{
			for (i=0; i<40000; i++); 
			for (i=0; i<40000; i++);
		}
		yellow3 = 0;
		red3 = 1;
		greeN1 = 1;
		{
			for (i=0; i<60000; i++); 
			for (i=0; i<60000; i++);
		}
		greeN1 = 0;
		yellow1 = 1;
		{
			for (i=0; i<40000; i++); 
			for (i=0; i<40000; i++);
		}
		yellow1 = 0;
		red1 = 1;
		red2 = 0;
		greeN2 = 1;
		{
			for (i=0; i<60000; i++); 
			for (i=0; i<60000; i++);
		}
		greeN2 = 0;
		yellow2 = 1;
		{
			for (i=0; i<40000; i++); 
			for (i=0; i<40000; i++);
		}
		yellow2 = 0;
		red2 = 1;
	}
}

