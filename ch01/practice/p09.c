/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("请输入三个整数。\n");
	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:");
	scanf("%d",&c);
	printf("它们的和是%d\n。",a+b+c);
    return 0;}   
*/

#include <stdio.h>
int main(void){
	int i,sum=0,x,a[100];
	scanf("%d",&x );
	for(i=1;i<=x;i++){
		printf("整数%d:",i );
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d\n",sum );
	return 0;
}