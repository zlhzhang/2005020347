#include<stdio.h>
int main(void) 
{
	int i;
	int a = 0;
	scanf("%d", &i);
	for (; i >= 0; i--){ 
	a = a + i;
	}
	printf("%d\n", a);
}
