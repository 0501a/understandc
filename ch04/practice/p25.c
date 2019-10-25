#include <stdio.h>
int main(void){
	int no,i,j,x;
	printf("金字塔 \n");
	printf("金字塔有几层:");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(x=1;x<=2*(no-i)+1;x++)
		    printf("%d",i);
		printf("\n");
	}
	return 0;
}