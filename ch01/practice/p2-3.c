#include <stdio.h>
int main(void){
	double i;
	printf("请输入一个实数：");
	scanf("%lf",&i);
	printf("你输入的是%.6f\n",i);
	return 0;
}