#include <stdio.h>
int main(){
    //int n[]={2020,2021,2022,2023};
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
  //int k;
	    int i,j;
	//一维数组的遍历
	//for(k=0;k<4;k++)
	//printf("%d ",n[k]);
	//printf("\n");
	// 二维数组的遍历
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
