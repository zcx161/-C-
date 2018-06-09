#include <stdio.h>
int main()
{
	int Sn;
	Sn=0;
	int n,a;
	a=2;
	int i;
	printf("请输入n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
	Sn=Sn+Sn*10+a;
	
	printf("Sn的值为：%d\n",Sn);
	return 0;
}
