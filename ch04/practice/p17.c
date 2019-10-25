#include <stdio.h>
int main(void){
	int no,i;
	printf("请输入一个正整数 :");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		printf("%d的二次方是%d\n",i,i*i );
	}
	return 0;
}