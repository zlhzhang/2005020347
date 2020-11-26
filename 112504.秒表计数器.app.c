#include<stdio.h>
#include<windows.h>
int main()
{	
	int a=1;
	while (1)
	{       
	        Sleep(1000);
		printf("现在是%d秒\n",a++);
		
	}
	system("pause");
	return 0;
}








/*#include<stdio.h>
#include<windows.h>
int main()
{	
	int a=0;
	for (;;)
	{
		Sleep(1000);
		printf("现在是%d秒\n",++a);

	}
	return 0;
}
/*
