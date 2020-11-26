#include<stdio.h>
int main()
{
	int k=6;
	int a;
	int i=1;
	printf("                                            小霸王猜数字\n");
for(;i;){	
	scanf("%d",&a);
if(a==k){
	printf("恭喜你答对了\n");
	//break;
	i=0;
        }
else if(a>k){
	printf("有点大\n");
            }
else if(a<k){
	printf("有点小\n");
            }
         } 
}
