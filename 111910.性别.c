#include<stdio.h>
int main()
{
	int i;
scanf("%d",&i);
	if(i>=1&&i<2)
printf("男\n");
	else if(i>=0&&i<1)
printf("女\n");
	else if(i!=0&&i!=1)
printf("输入有误，请重新输入。\n");
}
