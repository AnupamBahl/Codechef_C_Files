#include<stdio.h>
#define SIZE 150000

int main()
{
	int numOne=0, numTwo=0, diff=0,min=0,len;
	int fF=0,fS=0;
	short int firstOne=1;
	scanf("%d\n", &len);
	while(len>0)
	{
		scanf("%d %d\n", &numOne,&numTwo);
		fF+=numOne;
		fS+=numTwo;
		diff=fF-fS;
		if(diff>0&&diff>min)
		{
			firstOne=1;
			min=diff;
		}
		else if(diff<0)
		{
			diff=-diff;
			if(diff>min)
			{
				min=diff;
				firstOne=0;
			}
		}
		len--;
	}
	if(firstOne)
		printf("1 %d", min);
	else
		printf("2 %d", min);
	
	return 0;
}