#include<stdio.h>
#include<string.h>
int main()
{	
	int answer = 6;
	char t;
	int guess;
	char n [30];
	printf ("输入口令才能玩游戏：wo shi shuai ge 的汉字。\n");
	for ( ; ; )
{	
	scanf ("%s",&n);
if ( strcmp(n,"我是帅哥") ==0 )
	{
	printf ("恭喜你答对了，你就是帅哥，你可以玩游戏了，开始吧！\n\n\n");
	break;
	}
if ( strcmp(n,"我是帅哥") ) 
	{
	printf ("口令不正确，请重新输入！\n");
	}
}
	//第一个for循环结束
	printf ("                                            小霸王猜数字1-20之间\n");
for ( ; ; )
{	
if(!scanf("%d", &guess)) 
	{
	scanf("%c", &t);
	printf("请输入数字\n");
	continue;
	}
if ( guess==answer )
	{
	printf ("恭喜你答对了\n");
	break;
	}
else if ( guess>answer )
	{
	printf ("有点大\n\n");
    	}
else if ( guess<answer )
	{
	printf ("有点小\n\n");
    	}
} 
//第二个for循环结束
}
