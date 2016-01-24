#include<stdio.h>
#define SIZE 150000

int main()
{
	char buffer[SIZE];
	int numOne=0,numTwo=0,diff=0,min=0,i,len,fullFirst=0,fullSecond=0;
	short int firstOne=1;
	scanf("%d\n", &len);
	len=fread(buffer,sizeof(char),SIZE,stdin);	
	for(i=0;i<len;i++)
	{
		if(buffer[i]=='\n')
		{
			fullFirst+=numOne;
			fullSecond+=numTwo;
			diff=fullFirst-fullSecond;
			if(diff>=0&&diff>min)
			{
				min = diff;
				firstOne = 1;
			}
			else if(diff<0)
			{
				diff = -diff;
				if(diff>min)
				{
					min = diff;
					firstOne = 0;
				}
			}
			numOne = 0;
			numTwo = 0;
		}
		else if(buffer[i]==' ')
		{
			i++;
			while(buffer[i]!='\n'&&i<len)
			{
				numTwo = numTwo*10 + buffer[i]-'0';
				i++;
			}
			i--;
		}
		else
			numOne = numOne*10 + buffer[i]-'0';
	}
	diff=fullFirst-fullSecond;
	if(diff>=0&&diff>min)
	{
		min = diff;
		firstOne = 1;
	}
	else if(diff<0&&-diff>min)
	{
		min = diff;
		firstOne = 0;
	}
	
	if(firstOne)
		printf("1 %d", min);
	else
		printf("2 %d", min);

	return 0;
}