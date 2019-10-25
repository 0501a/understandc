#include <stdio.h>
int main(void){
	int no,i=1;
	printf("请输入一个正整数 :");
	scanf("%d",&no);
	while(i<=no){
		if(i%2==1)
			printf("+");
		if(i%2==0)
			printf("-");
		i++;
		
	}
	puts("");
	}