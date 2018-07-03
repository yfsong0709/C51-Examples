#include <STC12C5A.h>
#include <NRF905.h>

#define uchar unsigned char
#define uint unsigned int

void delay(unsigned int x){
 	uint i,j;
	for(i=0;i<x;i++)
		for(j=0;j<1000;j++);
}

void main()
{
	NRF905_Init();
	while(1){
		NRF905_Tx(0x11,0,0,0);
		delay(10);
	}
}