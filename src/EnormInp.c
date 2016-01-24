#include<stdio.h>
#include<malloc.h>
#define SIZE 100000

int main()
{
	long int n, k, count=0, num=0;
	char arr[SIZE];
	int i;
	
	scanf("%ld %ld\n", &n, &k);
	while((n = fread(arr,sizeof(char),SIZE,stdin)) != 0)
	{
		for(i=0;i<n;i++)
		{
			if(arr[i]=='\n')
			{	
				if(num % k == 0)
					count++;
				num = 0;
			}
			else
				num = (num * 10) + (arr[i] - '0');
		}
		
	}
	printf("%ld",count);		
	return 0;
}