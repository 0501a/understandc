#include <stdio.h>
int main(void){
	int a,b,i,x,sum=0;
	printf("请输入两个整数：\n");
	printf("整数a:"); scanf("%d",&a);
	printf("整数b:"); scanf("%d",&b);
	if(a>b){
		x=a;
		a=b;
		b=x;
	}
	printf("%d %d\n",a,b );
	for(i=a;i<=b;i++){
		sum=sum+i;
	}
	printf("和为%d\n",sum );

	return 0;
}