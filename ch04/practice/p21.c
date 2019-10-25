#include <stdio.h>
int main(void){
	int no,i,j;
	printf("生成一个正方形 \n");
	printf("正方形有几层:");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		for(j=0;j<no;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}