#include <stdio.h>
int main(void){
	int x;
	printf("请输入一个整数：");
	scanf("%d",&x);
	if(x>=0){
		x=x;
	} else {x=-x;
	}
	printf("绝对值是%d\n",x );
	return 0;
}