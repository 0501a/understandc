#include <stdio.h>
int main(void){
	int no,i=0;
	printf("请输入一个正整数 :");
	scanf("%d",&no);
	while(i<no){
		printf("*");
		i++;
		if(i%5==0) printf("\n");
	}
	printf("\n");
	return 0;
}