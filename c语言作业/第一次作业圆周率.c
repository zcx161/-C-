#include <stdio.h>
int main() 
{
	float pi=3.1415926;
	float r;
	float area; 
	printf("请输入半径"); 
	scanf("%f",&r);
	area=r*r*pi;
	printf("圆周率为");
	printf("%f"  ,pi);
	printf("半径为");
	printf("%f\n",r);
	printf("面积为");
	printf("%f",area); 
	return 0;
}
