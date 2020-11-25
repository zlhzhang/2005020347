#include<stdio.h>
int main()
{
	int n;
	printf("                                  打工人工资判断程序\n");
  scanf("%d",&n);
if(n<=100 && n>=0)
	{
	printf("贫困打工人。\n");
	}
else if(101<=n && n<=1000)
	{
	printf("一般打工人。\n");
	}
else if(1001<=n && n<=20000)
	{
	printf("土豪打工人。\n");
	}
else 
	{
	printf("输入有误，请重新输入。\n");
	}
}
