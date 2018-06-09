#include <stdio.h>
int main() 
{
	int ge,shi,bai,qian,wan;
	int num;
	printf("输入一个不多于五位的正整数:");
	scanf("%d",&num);
	wan=num/10000;
	qian=num%10000/1000;
	bai=num%1000/100;
	shi=num%100/10;
	ge=num%10;
	if(wan!=0)
	  {
	  printf("这是一个五位数\n"); 
	  printf("正序输出：%d%d%d%d%d\n",wan,qian,bai,shi,ge);
	  printf("逆序输出：%d%d%d%d%d\n",ge,shi,bai,qian,wan);
      } 
	else if(qian!=0)
	  {
	  printf("这是一个四位数\n");
	  printf("正序输出：%d%d%d%d\n",qian,bai,shi,ge);
	  printf("逆序输出：%d%d%d%d\n",ge,shi,bai,qian);
	  }
	    else if(bai!=0)
	    {
		printf("这是一个三位数\n");
	    printf("正序输出：%d%d%d\n",bai,shi,ge);
	    printf("逆序输出：%d%d%d\n",ge,shi,bai);
	    }
	      else if(shi!=0)
	       {
		   printf("这是一个两位数\n");
	       printf("正序输出：%d%d\n",shi,ge);
	       printf("逆序输出：%d%d\n",ge,shi);
		   }
	       else if(ge!=0)
	       {
		   printf("这是一个一位数\n");
	       printf("正序输出：%d\n",ge);
	       printf("逆序输出：%d\n",ge);
		   }
	return 0;
}
