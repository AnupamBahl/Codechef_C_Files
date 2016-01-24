#include<stdio.h>

int main()
{
	int buffer[100][100], input[1000];
	int i,N,num,j,one=0,two,temp;
	scanf("%d\n",&N);
	printf("N:%d\n",N);
	for(i=0;i<N;i++)
		scanf("%d ",&input[i]);
	while(1)
	{
		for(i=0;i<N;i++)
		{
			if(input[i]==-1)
				continue;
			else
				break;
		}
		if(i==N)
			break;
		num=i+1;
		two=0;
		while(input[i]!=num)
		{
			temp=input[i];
			input[i]=-1;
			buffer[one][two]=i+1;
			two++;
			i=temp-1;
		}
		buffer[one][two]=i+1;
		two++;
		buffer[one][two]=num;
		two++;
		input[i]=-1;
		buffer[one][two]=-1;
		one++;	
	}
	printf("%d\n",one);
	for(i=0;i<one;i++)
	{
		for(j=0;buffer[i][j]!=-1;j++)
			printf("%d ",buffer[i][j]);
		printf("\n");
	}
	return 0;
}
