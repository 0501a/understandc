#include <stdio.h>
int main(void){
	int a,b,c;
	puts("请输入三个整数。");
	printf("整数A：");
	scanf("%d",&a);
	printf("整数B：");
	scanf("%d",&b);
	printf("整数C：");
	scanf("%d",&c);
	if(a==b && a==c && b==c){
		printf("有三个值相等\n");
	}else if(a==b||a==c||b==c){
		printf("有两个值相等\n");
	}
	if(a!=b && a!=c && b!=c){
		printf("三个值个各相等\n");
	}
	return 0;
}