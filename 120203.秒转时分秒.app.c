#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/3600;
	b=(n%3600)/60;
	c=n%3600%60;
	printf("%d时%d分%d秒",a,b,c);

}
