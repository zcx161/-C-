#include <stdio.h>
int main() 
{
    int grade;
    printf("请输入成绩：");
	scanf("%d",&grade);
	if(grade>=90)
	 printf("你的等级是'A'");
	 else if(grade>=80)
	  printf("你的等级是'B'");  
	  else if(grade>=70)
	    printf("你的等级是'C'");
		else if(grade>=60)
	      printf("你的等级是'D'"); 
		  else 
	      printf("你的等级是'E'");   
	return 0;
}
