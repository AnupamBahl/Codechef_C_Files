#include<stdio.h>
#include<conio.h>
int main()
{
	int buffer[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int len, i, count, num,div;
	scanf("%d\n", &len);
	while(len--)
	{
		scanf("%d\n", &num);
		count=0;
		while(num>0)
		{
			for(i=11;i>=0;i--)
			{
				if( num>=buffer[i])
				{
					num=num - buffer[i];
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
					
					