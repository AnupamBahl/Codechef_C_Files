#include<stdio.h>

int main()
{
	int i;
	char buffer[10];
	gets(buffer);
	for(i=0;buffer[i]!='\0';i++)
		printf("%c ",buffer[i]);
}





//
//
//RANDOM NUMBER GENERATOR
//
//
/*
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<time.h>
#define AMOUNT 1000000

int main()
{
	FILE *myFile = fopen("input.txt", "w");
	int counter = 0, num, i;
	int c[15];

	srand(time(0));
	for(;counter <= AMOUNT; counter++)
	{
		num = rand();
		for(i = 0;num != 0;i++)
		{
			c[i] = num%10;
			num /= 10;
		}
		for( i = i-1 ; i >= 0 ; i--)
		{
			fprintf(myFile, "%d", c[i]);
		}
		fprintf(myFile,"\n");
	}			
}

*/