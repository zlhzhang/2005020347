nclude<stdio.h>
#include<string.h>
void main()
{
	char n[30];
	scanf("%s",&n);
if( strcmp(n,"春节") ==0 )
	{
	printf("给我安排饺子\n");
	}
else if( strcmp(n,"端午节") ==0 )
	{
	printf("给我安排粽子\n");
	}
else if( strcmp(n,"元宵节") ==0 )
	{
	printf("给我安排元宵\n");
	}
else if( strcmp(n,"中秋节") ==0 )
	{
	printf("给我安排月饼\n");
	}

}	
	
