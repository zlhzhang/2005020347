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

//方法二
/*#include<stdio.h>
int main(void) 
{	
	int k;
	int an;
	scanf("%d", &an);
	k=an*(1+an)/2;
	printf("%d\n", k);
}*/

 
