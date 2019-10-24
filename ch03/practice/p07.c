#include <stdio.h>
int max(a,b){
	if(a>b) return a;
	else
		return b;
}
int main(void){
	int a[4],x,i;
	printf("请输入四个整数：\n");
    for(i=0;i<4;i++)
    	scanf("%d",&a[i]);
    for(i=0;i<4;i++){
    	a[i+1]=max(a[i],a[i+1]);
    }
    printf("四个数中最大的是%d\n",a[4] );
	return 0;
}