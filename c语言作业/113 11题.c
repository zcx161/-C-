#include <stdio.h>
int main()
 {
 	int num1,num2,num3,num4;
 	int tnum;
	printf("请输入四个不同的整数");
	scanf("%d,%d,%d,%d",&num1,&num2,&num3,&num4);
	if(num1>num2)
	{tnum=num1;
	num1=num2;
	num2=tnum;
	}
	if(num1>num3)
	{tnum=num1;
	num1=num3;
	num3=tnum;
	}
	if(num1>num4)
	{tnum=num1;
	num1=num4;
	num4=tnum;
	}
	if(num2>num3)
	{tnum=num2;
	num2=num3;
	num3=tnum;
	}
	if(num2>num4)
	{tnum=num2;
	num4=num2;
	num2=tnum;
	}
	if(num3>num4)
	{tnum=num3;
	num3=num4;
	num4=tnum;
	}
	printf("四个整数从小到大输出");
	printf("%d,%d,%d,%d\n",num1,num2,num3,num4);
	return 0;
}
