#include <stdio.h>
int main()
{
	int n;
	int i;
	double fz,fm;
	double term;
	double sum;
	n=20;
	fz=2;
	fm=1;
	sum=0;
	for(i=1;i<=n;i++) 
	{
		sum=sum+fz/fm;
		term=fz;
		fz=fz+fm;
		fm=term;
	}
	printf("sum=%f\n",sum);
	return 0;
}
