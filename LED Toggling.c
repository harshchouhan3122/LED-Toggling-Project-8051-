//LED Toggling using MicroController 8051

#include<reg51.h>
void delay (unsigned int);
void main (void){
	while(1){
		//bitwise toggling of port
		P1 = 0XAA;			//1010 1010 = AA H
		delay(1000);
		P1 = 0X55;			//0101 0101 = 55 H
		delay(1000);
		
	}
}

void delay (unsigned int time){
	unsigned int i,j;
	for(i=0 ; i<=time ; i++)
		for (j=0 ; j<=1275; j++);
}
