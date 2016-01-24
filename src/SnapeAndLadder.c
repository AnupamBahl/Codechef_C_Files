#include<stdio.h>
#include<math.h>
int main()
{
	int T, B, LS;
	float min,max;
	scanf("%d\n",&T);
	while(T--)
	{
		scanf("%d %d\n",&B,&LS);
		LS*=LS;
		B*=B;
		min = sqrt(LS - B);
		max = sqrt(LS + B);
		printf("%f %f\n",min,max);
	}
	return 0;
}