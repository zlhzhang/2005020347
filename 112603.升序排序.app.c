#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
if(a>b)
	{
	t=a;
	a=b;
	b=t;
	}
if(a>c)
	{
	t=a;
	a=c;
	b=t;
	}
if(b>c)
	{
	t=b;
	b=c;
	c=t;
	}	
	printf("从小到大为\n%d\n%d\n%d\n",a,b,c);
}
