#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define SIZE 10000
int main(){	
	char *array;
	short int num;
	
	array = (char*)malloc(sizeof(char)*SIZE);
	fread(array,sizeof(char),SIZE,stdin);
	while(1)
	{
		num = 0;
		while(*array >= '0' && *array <='9')
		{
			num = num *10 + (*array - '0');
			array++;
		}
		if(num == 42)
			return 1;
		else
			printf("%d\n",&num);
	}
			
	return 0;
}	