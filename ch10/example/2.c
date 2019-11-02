#include <stdio.h>
#include <string.h>

char *replace(char *target, char *old, char *new){
	int i;
	for(int i=0;i<strlen(target);i++)
		for(int j=0;j<strlen(new);j++){
			if(target[i]==old[j])
				target[i]=new[j];
		}
	for(int i=0;i<strlen(target);i++)
	    return &target[i];
    return 0;
}

int main(int argc, char const *argv[])
{
	char target[1000],old[1000],new[1000];
	scanf("%[^\n]",target);
	while(getchar()!='\n');
	scanf("%[^\n]",old);
	while(getchar()!='\n');
	scanf("%[^\n]",new);
	printf("%s\n",replace(target,old,new) );
	
}