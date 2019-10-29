#include <stdio.h>
#define number 100
int main(void){
	int i,n,a[number];
	printf("数据个数:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d号:",i);
		scanf("%d",&a[i-1]);
	}
	printf("{");
	for(i=0;i<n;i++){
		if(i==n-1)
			printf("%d",a[n-1]);
		else printf("%d,",a[i]);
	}
	printf("}\n");

	return 0;
}