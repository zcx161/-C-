#include <stdio.h>
int main()
 {
  int n1,n2,n3;
  double k;
  double sum1=0,sum2=0,sum3=0;
  n1=100;
  n2=50;
  n3=10;
  for (k=1;k<=n1;k++)  
    sum1=sum1+k;
  for (k=1;k<=n2;k++)  
    sum2=sum2+k*k;
  for (k=1;k<=n3;k++)  
    sum3=sum3+1/k;
  printf("sum=%f\n",sum1+sum2+sum3);
  return 0;
 }



