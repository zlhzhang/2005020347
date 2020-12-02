#include<stdio.h>
int main()
{
	int n;
	printf("                               中国大学排名前20\n");
	scanf("%d",&n);
	switch(n){
		case 1:printf("清华大学\n");break;
		case 2:printf("北京大学\n");break;
		case 3:printf("复旦大学\n");break;
		case 4:printf("上海交通大学\n");break;
		case 5:printf("中国科学技术大学\n");break;
		case 6:printf("中国人民大学\n");break;
		case 7:printf("北京航空航天大学\n");break;
		case 8:printf("南京大学\n");break;
		case 9:printf("同济大学\n");break;
		case 10:printf("浙江大学\n");break;
		case 11:printf("南开大学\n");break;
		case 12:printf("北京师范大学\n");break;
		case 13:printf("武汉大学\n");break;
		case 14:printf("西安交通大学\n");break;
		case 15:printf("华中科技大学\n");break;
		case 16:printf("天津大学\n");break;
		case 17:printf("中山大学\n");break;
		case 18:printf("北京理工大学\n");break;
		case 19:printf("东南大学\n");break;
		case 20:printf("华东师范大学\n");break;
		default:printf("输入有误，请重新输入前20个数字\n");
			}	
}
