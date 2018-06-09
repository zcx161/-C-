#include <stdio.h>
#include <math.h>
int main()
{
	float num;
	float root;
	printf("请输入一个小于1000的正数\n");
	scanf("%f",&num);
	while(num>0&&num>=1000)
	  {
	  printf("请输入一个小于1000的正数\n"); 
	  scanf("%f",&num);}
	  root=sqrt(num);
	  printf("%.0f",root);
	return 0;
}
