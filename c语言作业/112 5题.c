#include <stdio.h>
#include <math.h>
int main()
{
	float num;
	float root;
	printf("������һ��С��1000������\n");
	scanf("%f",&num);
	while(num>0&&num>=1000)
	  {
	  printf("������һ��С��1000������\n"); 
	  scanf("%f",&num);}
	  root=sqrt(num);
	  printf("%.0f",root);
	return 0;
}
