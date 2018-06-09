#include <stdio.h>
int main()
{
	int n;
	int ge,shi,bai;
	int sum;
	for(n=100;n<1000;n++)
	{
		ge=n%10;
		shi=n/10%10;
		bai=n/100%10;
		sum=ge*ge*ge+shi*shi*shi+bai*bai*bai;
		if(n==sum)
		printf("%d ",n);
	} 
	return 0;
}
