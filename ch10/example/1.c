/**
 * 判断字符串是否是空字符串
 * @param cp
 * @return 1 空字符串， 0 非空字符串
 */


#include <stdio.h>
#include <string.h>

char *splitFirst(char *target, char *split){
	for(int i=0;i<strlen(target);i++){
		if(target[i]==split[0]){
			int x=i;
			for(int j=0;j<strlen(split);j++)
				if(target[i+j]!=split[i+j])
					break;
			target[x+strlen(split)-2]='\0';
			return target;
		}
	}
	return target;
}
int main(int argc, char const *argv[])
{
	char target[1000],split[1000];
	scanf("%[^\n]",target);
	while(getchar()!='\n');
	scanf("%[^\n]",split);
	printf("%s\n", splitFirst(target,split));
	
	
}