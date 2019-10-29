#include <stdio.h>
int main(void){
	int a[6][2],b[6]={0},num1=0,num2=0,i,j;
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			if(j==0)
				num1+=a[i][j];
			if(j==1)
				num2+=a[i][j];
			b[i]+=a[i][j];
			
		}
		printf("     %d\n",b[i]/2);
		
	}
	printf("%d %d\n",num1/6,num2/6);
		// printf("      ");
    return 0;
}       