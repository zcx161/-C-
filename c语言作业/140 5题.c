#include <stdio.h>
int main()
{
	int Sn;
	Sn=0;
	int n,a;
	a=2;
	int i;
	printf("������n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
	Sn=Sn+Sn*10+a;
	
	printf("Sn��ֵΪ��%d\n",Sn);
	return 0;
}
