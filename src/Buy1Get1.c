#include<stdio.h>
#define SIZE 30000
int main()
{
	char bufferM[200],buffer[200];
	int T,i,j,count=0,loc=0;
	scanf("%d\n",&T);
	while(T--)
	{
		gets(bufferM);
		loc=0;
		count=0;
		for(i=0;(bufferM[i]>='A' && bufferM[i]<='Z') || (bufferM[i]>='a' && bufferM[i]<='z');i++)
		{
			for(j=0;j<loc;j++)
			{
				if(buffer[j]==bufferM[i])
				{
					buffer[j]='\0';
					j=-1;
					break;
				}
			}
			if(j!=-1)
			{
				count++;
				buffer[loc]=bufferM[i];
				loc++;
			}
		}
		
	printf("%d\n",count);
		
	}
	return 0;
}