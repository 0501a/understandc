#include <stdio.h>
int main(void){
	int a;
	printf("请输入月份：");
	scanf("%d",&a);
	switch(a){
	case 3:
	case 4:
	case 5:
		printf("春季\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("夏季\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("秋季\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("冬季\n");
		break;
	default:
		printf("输入有错！\n");
		break;
	}
	return 0;
}