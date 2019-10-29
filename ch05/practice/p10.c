#include <stdio.h>
int main(void){
	int a[4][3],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			a[i][j]=(i+1)*(j+1);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    printf("\n");
    int b[4][3],x,y;
	for(x=0;x<3;x++){
		for(y=0;y<4;y++){
			b[x][y]=(x+1)*(y+1);
			printf("%d ",b[x][y]);
		}
		printf("\n");
	}
	return 0;
}