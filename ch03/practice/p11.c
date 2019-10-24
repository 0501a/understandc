#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a,b;
	printf("请输入两个整数：\n");
	printf("整数A：");
	scanf("%d",&a);
	printf("整数B：");
	scanf("%d",&b);
	if(abs(a-b)<=10){
		printf("它们的差小于等于10\n");
	} else printf("它们的差大于等于11\n");
	return 0;
}