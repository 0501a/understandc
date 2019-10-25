#include <stdio.h>
int main(void){
	int no,i,j,a,b;
	printf("生成一个长方形 \n");
	printf("一边:");
	scanf("%d",&a);
	printf("另一边:");
	scanf("%d",&b);
	if(a>b){
		no=a;
		a=b;
		b=no;
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}