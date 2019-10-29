#include <stdio.h>
int main(void){
	int tensu[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
	for(int a=0;a<2;a++)
		for(int b=0;b<4;b++)
			for(int c=0;c<3;c++)
				printf("tensu[%d][%d][%d]=%d\n",a,b,c,tensu[a][b][c]);
}