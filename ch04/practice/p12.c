#include <stdio.h>
int main(void){
	int no,i=0;
	do{
	printf("请输入一个正整数 :");
	scanf("%d",&no);
	if(no<=0)
		puts("\a请不要输入非正整数。");
} while (no<=0);
printf("整数%d的位数",no);
while(no>0){
	no/=10;
	i++;
}
	printf("%d\n",i);
	return 0;
}