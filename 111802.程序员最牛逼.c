#include<stdio.h>
int main()
{
	int n;
   printf("                                  打工人工资等级划分\n");
scanf("%d",&n);
if(n<=-1)
	printf("你还有花呗没还，无法使用该程序。\n");

else if(0<=n&&n<=500)
	printf("赤贫。\n");
else if(501<=n&&n<=1500)
	printf("贫困。\n");
else if(1501<=n&&n<=3000)
	printf("普通打工人。\n");
else if(3001<=n&&n<=5000)
	printf("普通清洁工。\n");
else if(5001<=n&&n<=12000)
	printf("水电工工资。\n");
else if(12001<=n&&n<=50000)
	printf("脑袋大脖子粗不是老板就是伙夫。\n");
else if(50001<=n&&n<=2000000000000)
	printf("程序员。\n");
}
