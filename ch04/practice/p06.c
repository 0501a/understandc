#include <stdio.h>
int main(void){
	int no,i=2;
	printf("请输入一个正整数 :");
	scanf("%d",&no);
	while(i <= no){
		printf("%d",i );
		i+=2;
		printf("\n");
	}
	return 0;
}