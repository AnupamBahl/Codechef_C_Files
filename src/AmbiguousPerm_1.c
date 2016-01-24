#include<stdio.h>
#define SIZE 150000

int main()
{
	char buffer[SIZE];
	int mainBuffer[SIZE];
	int len, i, num=0, tempNum=0,loc=0, j;
	short int flag=1;

	while( (len=fread(buffer,sizeof(char),SIZE,stdin)) != 0 )
	{
		for(i=0;i<len;i++)
		{
			if(flag && buffer[i]!='\n')
				num = num*10 + buffer[i]-'0';
			else if(buffer[i]=='\n')
			{
				if(tempNum==0)
				{
					flag = 0;
					if(num==0)
						return 1;
				}
				else
				{
					mainBuffer[loc]=tempNum;
					tempNum=0;
					for(j=0;j<=loc;j++)
					{
						if((j+1)!=mainBuffer[mainBuffer[j]-1])
						{
							printf("Not Ambiguous\n");
							break;
						}
					}
					if(j>loc)
						printf("Ambiguous\n");
				
					loc=0;
					num=0;
					flag=1;
				}
			}

			else if(buffer[i]==' ')
			{
				mainBuffer[loc]=tempNum;
				tempNum=0;
				loc++;
			}
			else
			{
				tempNum = tempNum*10 + buffer[i]-'0';
			}
		}
	}
	getch();
	return 0;
}
			
	