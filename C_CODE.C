#include<reg51.h>

void delay(int x);
void display(int k, int l);

void main()
{
	unsigned int port[3][3]={{246,245,243},{246,238,222},{254,253,251}};
	unsigned char i,j;
	P0=0XFF;
	P2=0XFF;
	P1=192;
	P3=192;
	while(1)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==2)
				{
					P2=port[i][j];
					P0=246;
					if(j==2)
					{display(1,5);}
					else
					{delay(2);
						P1=192;
						P3=192;}
				}
				else
				{
					P0=port[i][j];
					P2=254;
					if(j==2)
					{display(1,5);}
					else
					{delay(2);
						P1=192;
						P3=192;}
				}
			}
		}
	}
}

void delay(int x)
{
	unsigned int i,j;
	TMOD=0X01;
	for(i=0;i<x;i++)
	{
		for(j=0;j<1000;j++)
		{
			TH0=0XFC;
			TL0=0X66;
			TR0=1;
			while(TF0==0);
			TR0=0;
			TF0=0;
		}
	}
}

void display(int k,int l)
{
	signed int i,j,m;
	unsigned int num[]={192,249,164,176,153,146,130,248,128,144};
	for(i=k;i>=0;i--)
		{
			if(i==k)
				{m=l;}
			else
				{m=9;}		
			for(j=m;j>=0;j--)
				{
					P3 = num[i];
					P1 = num[j];
					delay(1);
					if(i==0 && j==0)
					{break;}
				}
			}
}
	
