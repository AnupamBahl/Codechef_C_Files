#include<stdio.h>

int main()
{
	int pies[30], racks[30], count;
	int len,i,j,num,tempNum,k=0,l;

	scanf("%d\n",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d\n",&num);
		count=0;
		for(j=0;j<num;j++)
		{
			scanf("%d ",&tempNum);
			for(k=0;k<j;k++)
			{
				if(pies[k]<tempNum)
					break;
			}
			for(l=j;l>k;l--)
				pies[l]=pies[l-1];
			pies[k]=tempNum;
		}

		for(j=0;j<num;j++)
		{
			scanf("%d ",&tempNum);
			for(k=0;k<j;k++)
			{
				if(racks[k]<tempNum)
					break;
			}
			for(l=j;l>k;l--)
				racks[l]=racks[l-1];
			racks[k]=tempNum;
		}
		
		for(j=0,l=0;j<num;j++)
		{
			if(pies[j]<=racks[l])
			{
				l++;
				count++;
			}
		}
		printf("%d\n",count);
			
	}
	return 0;
}
		
	