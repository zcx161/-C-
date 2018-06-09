#include <stdio.h>
 #include <math.h>
int main()
 {
  float num,x0,x1;
  printf("请输入一个正数:");
  scanf("%f",&num);
  x0=num/2;
  x1=(x0+num/x0)/2;
  do
   {x0=x1;
    x1=(x0+num/x0)/2;
   }while(fabs(x0-x1)>=1e-5);
  printf("%f的平方根是%f\n",num,x1);
  return 0;
 } 
