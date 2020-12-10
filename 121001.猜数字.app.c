#include<stdio.h>
int main()
{	
	
	char n[30];
	printf("输入口令才能玩游戏：wo shi shuai ge 的汉字。\n");
	scanf("%s",&n);
if( strcmp(n,"我是帅哥") ==0 )
{
	int k=6;
	int a;
	printf("                                            小霸王猜数字1-20之间\n");
for(;;){	
	scanf("%d",&a);
if(a==k){
	printf("恭喜你答对了\n");
	break;
		}
else if(a>k){
	printf("有点大\n");
            }
else if(a<k){
	printf("有点小\n");
            }
         } 
}
else
	printf("名字错误");
}
