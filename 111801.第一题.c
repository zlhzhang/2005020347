#include<stdio.h>
int main()
{
	int a=3,b=4,c=5,x=3,y=4;
if(a+b>c&&b==c)
	printf("1\n");
else
    printf("0\n");
if(a||b+c&&b-c)
	printf("1\n");
else
	printf("0\n");
if(!(a>b)&&!c||1)
	printf("1\n");
else
	printf("0\n");
if(!(x=a)&&(y=b)&&0)
	printf("1\n");
else
	printf("0\n");
if(!(a+b)+c-1&&b+c/2)
	printf("1\n");
else
	printf("0\n");
printf("1为真命题，0为假命题。");
}
