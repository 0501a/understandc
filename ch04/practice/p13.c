#include <stdio.h>
int main(void){
	int no,i,sum=0;
	printf("n的值 :");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		sum+=i;
	}
	printf("1到%d的和为%d\n",no,sum );
	return 0;
}