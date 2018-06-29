#include<stdio.h>
void main()
{
int a[5][5],sum1=0,sum2=0,i,j;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
printf("请输入第%d个数\n",i*5+j+1);
scanf("%d",&a[i][j]);
}
for(i=0;i<5;i++)
{
sum1+=a[i][i];
sum2+=a[i][4-i];
}
printf("主对角线之和=%d\n副对角线之和=%d\n",sum1,sum2);
}
