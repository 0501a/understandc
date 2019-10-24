#include <stdio.h>
int main(void){
	int a,b;
	printf("请输入两个整数。\n");
	printf("整数a:");
	scanf("%d",&a);
	printf("整数b:");
	scanf("%d",&b);
	printf("a的值是b的%.10lf%% \n",(double)a/b*100 );
	return 0;
}