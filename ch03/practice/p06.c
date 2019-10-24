#include <stdio.h>
int main(void){
	int a,b,c,x;
	printf("请输入三个整数：\n");
	scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
    	x=b;
    	if(b>c){
    		x=c;
    	} 
    } else if(a>c){
    	x=c;
    } else {
    	x=a;
    }
    printf("三者中最小的是%d\n",x );


	// int a,b,c,x;
	// printf("请输入三个整数：\n");
	// scanf("%d,%d,%d",&a,&b,&c);
	// if(a < b && a < c){
	// 	x = a;
	// } else if (c < b && c < a){
	// 	x = c;
	// }else{
	// 	x = b;
	// }

	// x = a;

	// if(x > b){
	// 	x = b;
	// }

	// if(x > c){
	// 	x = c;
	// }

    // if(a>b){
    // 	x=b;
    // 	if(b>c){
    // 		x=c;
    // 	} 
    // } else if(a>c){
    // 	x=c;
    // } else {
    // 	x=a;
    // }
    // printf("三者中最小的是%d\n",x );

	return 0;
}