#include <stdio.h>
int main()
{
	int num;
	int i;
	num=1;
	for(i=9;i>=1;i--)
	num=(num+1)*2;
	printf("第一天摘了%d个桃子",num); 
	return 0;
}
