#include<reg51.h>

sbit led1=P1^0; 
sbit led2=P1^1; 
sbit led3=P1^2;
sbit led4=P1^3; 
sbit sw1=P2^0; 
sbit sw2=P2^1; 
sbit sw3=P2^2;
sbit sw4=P2^3;

void main (){
	P1=0x00;
	P2=0xff; 
	while (1) {
		if(sw1==0){
			led1=1; 
			while(sw1==0);
		}
		if(sw2==0){
			led2=1;
			while(sw2==0);
		}
		if(sw3==0){
			led3=1;
			while(sw3==0);
		}
		if(sw4==0){
			led4=1;
			while(sw4==0);
		}
		led1=led2=led3=led4=0;
	}
}

