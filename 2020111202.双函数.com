#include<stdio.h>

int sum(int a, int b);

int main() {
	printf("%d\n", sum(200, 2));
}

int  sum(int a, int b) {
	return (a + b);
} 




#include<stdio.h>
int sum(int a,int b)
{
	return(a*b);
} 
int main()
{
	printf("%d\n",sum(2020,3));
}
