#include <stdio.h>
int main() 
{
	int ge,shi,bai,qian,wan;
	int num;
	printf("����һ����������λ��������:");
	scanf("%d",&num);
	wan=num/10000;
	qian=num%10000/1000;
	bai=num%1000/100;
	shi=num%100/10;
	ge=num%10;
	if(wan!=0)
	  {
	  printf("����һ����λ��\n"); 
	  printf("���������%d%d%d%d%d\n",wan,qian,bai,shi,ge);
	  printf("���������%d%d%d%d%d\n",ge,shi,bai,qian,wan);
      } 
	else if(qian!=0)
	  {
	  printf("����һ����λ��\n");
	  printf("���������%d%d%d%d\n",qian,bai,shi,ge);
	  printf("���������%d%d%d%d\n",ge,shi,bai,qian);
	  }
	    else if(bai!=0)
	    {
		printf("����һ����λ��\n");
	    printf("���������%d%d%d\n",bai,shi,ge);
	    printf("���������%d%d%d\n",ge,shi,bai);
	    }
	      else if(shi!=0)
	       {
		   printf("����һ����λ��\n");
	       printf("���������%d%d\n",shi,ge);
	       printf("���������%d%d\n",ge,shi);
		   }
	       else if(ge!=0)
	       {
		   printf("����һ��һλ��\n");
	       printf("���������%d\n",ge);
	       printf("���������%d\n",ge);
		   }
	return 0;
}
