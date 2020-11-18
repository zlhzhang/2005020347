#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
if(x<1)
	printf("答案是%d\n",x);
else if(x>=1&&x<10)
	printf("答案是%d\n",2*x-1);
else if(x>=10)
	printf("答案是%d\n",3*x-11);
}
