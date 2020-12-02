#include<stdio.h>
int main()
{
	char n;
	printf("                               欢迎使用\n");
	scanf("%c",&n);
	switch(n){
		case 'w':printf("你在点击上键\n");break;
		case 'a':printf("你在点击左键\n");break;
		case 's':printf("你在点击下键\n");break;
		case 'd':printf("你在点击右键\n");break;
		default:printf("输入有误，请重新输入，只能输入wasd\n");
			}	
}

