#include <stdio.h>
int main()
{
	int n;
	int sum;
	int i;
	printf("1000���ڵ�����Ϊ��"); 
	for(n=2;n<1000;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		if(n%i==0)
		sum+=i;
		if(sum==n)
		printf("%d ",n); 
	 } 
	return 0;
}
