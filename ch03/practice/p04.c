#include <stdio.h>
int main(void){
	int a,b;
	printf("请输入两个整数：\n");
	printf("整数A：");
	scanf("%d",&a);
	printf("整数B：");
	scanf("%d",&b);
	if(a>b) {
		printf("A大于B\n");
	} else if(a<b){
		printf("A小于B\n");
	} else {
		printf("A等于B\n");
	}
	return 0;
}