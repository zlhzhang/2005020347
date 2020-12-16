#include<stdio.h>
int a(int x)
{
if(x<=0){
	return 0;
		    }
	return x+a(x-1);
}
void main ()
{
	for(;;){
	int k;
	scanf("%d",&k);
	printf ("%d\n\n", a(k));
			  }
}
