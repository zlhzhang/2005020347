#include<stdio.h>
void main() {
	int a[9][10]={
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,},
		};
	int n;  int m;int k=90;
	for(n=0;n<9;n++){
		for(m=0;m<10;m++){
		printf("%d  ",a[n][m]);
		}
		printf("\n");
	}	

for(n=0;n<9;n++){
		for(m=0;m<10;m++){
		a[n][m]=k--; 
		printf("%d  ",a[n][m]);
		}
		printf("\n");
	}	
}
