#include <stdio.h>
int main()
{
	int n;
	int i;
	int sum;
	int mul;
	mul=1;
	sum=0;
	printf("������һ������n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  mul=mul*i;
	  sum=sum+mul;
	}
	printf("sum=%d\n",sum);
	return 0;
}
