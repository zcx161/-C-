#include <stdio.h> 
int main()
{
	int profit;
	int bonus;
	printf("请输入当月利润");
	scanf("%d",&profit);
	if(profit<=100000)
	bonus=profit*0.1;
	else if(profit<=200000)
	bonus=10000+(profit-100000)*0.075;
	else if(profit<=400000)
	bonus=17500+(profit-200000)*0.05;
	else if(profit<=600000)
	bonus=27500+(profit-400000)*0.03;
	else if(profit<=1000000)
	bonus=33500+(profit-600000)*0.015;
	else
	bonus=39500+(profit-100000)*0.01;
	printf("应发奖金总数为");
	printf ("%d\n",bonus);
	return 0;
}
