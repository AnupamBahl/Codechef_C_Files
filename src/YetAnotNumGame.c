#include<stdio.h>
#define SIZE 10

int main()
{
	char buffer[SIZE];
	int len,i;
	long long int number=0;
	scanf("%d\n", &len);
	
	while( (len=fread(buffer,sizeof(char),SIZE,stdin)) != 0 )
	{
		for(i=0;i<len;i++)
		{
			if(buffer[i]=='\n')
			{
				if(number%2==0)
					printf("ALICE\n");
				else
					printf("BOB\n");
				number = 0;
			}
			else
				number = number*10 + buffer[i]-'0';
		}
		
	}
	if(number%2==0)
			printf("ALICE\n");
		else
			printf("BOB\n");
	getch();
	return 0;
}	