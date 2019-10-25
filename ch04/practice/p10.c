#include <stdio.h>
int main(void){
	int no,i=1;
	printf("请输入一个正整数 :");
	scanf("%d",&no);
	while(i<=no){
		printf("*\n");
		i++;
	}
	return 0;
}