#include<stdio.h>
#include<conio.h>
#define SIZE 1000

int main()
{
	int buffer[SIZE], len=0, num,i;
	short int flag=1;
	scanf("%d\n",&num);	
	while(num!=0)
	{
		for(i=0;i<num;i++)
		{
			scanf("%d ",&buffer[i]);
		}
		for(i=0;i<num;i++)
		{
			if((i+1)!=buffer[buffer[i]-1])
			{
				printf("Not Ambiguous\n");
				flag=0;
				break; 
			}
		}
		if(flag)
			printf("Ambiguous\n");
		flag=1;
		scanf("%d\n",&num);
	}
	
	getch();
	return 0;
}