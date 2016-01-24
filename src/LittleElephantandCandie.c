#include<stdio.h>
#define SIZE 660000

int main()
{
	int T,N, temp,i;
	char buffer[SIZE];
	long int C;
	scanf("%d\n",&T);
	T=fread(buffer,sizeof(char),SIZE,stdin);
	for(i=0;i<T;i++)
	{
		C=0;
		N=0;
		temp = 0;
		while(buffer[i]!=' ')
		{
			N = N*10 + buffer[i]-'0';
			i++;
		}
		i++;
		while(buffer[i]!='\n')
		{
			C = C*10 + buffer[i]-'0';
			i++;
		}
		i++;
		while(buffer[i]!='\n')
		{
			if(i==T)
				break;
			if(buffer[i]==' ')
			{
				C -= temp;
				if(C<0)
				{
					printf("No\n");
					while(buffer[i]!='\n')
					{
						if(i==T)
							return 0;
						i++;
					}
					temp = -1;
					break;
				}
				temp = 0;
			}
			else
				temp = temp*10 + buffer[i]-'0';
			i++;
		}
		C -= temp;
		if(C<0)
		{
			printf("No\n");
			temp = -1;
		}

		if(temp != -1)
			printf("Yes\n");
	}
	return 0;
}


