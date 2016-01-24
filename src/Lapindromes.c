#include<stdio.h>

int main()
{
	int T,i,len;
	char buffer[1100];
	
	scanf("%d\n",&T);
	while(T--)
	{
		int A[30]={0};
		len=0;
		gets(buffer);
		for(i=0;buffer[i]!='\0';i++)
		{
			len++;
			A[buffer[i]-'a']++;
		}
		if(len%2 != 0)
		{
			A[len/2]=0;
		}
		for(i=0;i<30;i++)
		{
			if(A[i]%2 != 0)
			{
				printf("NO\n");
				i=-1;
				break;
			}
		}	
		if(i!=-1)
			printf("YES\n");	
	}
}