#include<stdio.h>
#include <string.h>
#include "p.h"

int main(int argc, char const *argv[])
{
	
	// 判断字符串是否是空字符
	// char cp[1000];
	// scanf("%[^\n]",cp);
	// printf("%lu\n",strlen(cp) );
	// if(isEmpty(cp)==0)
	// 	printf("cp是非空字符串\n");
	// else 
	// 	printf("cp是空字符串\n");

    // 返回指定位置的字符
	// char cp[1000];
	// scanf("%[^\n]",cp);
    // int x;
    // scanf("%d",&x);
	// printf("%c\n",charAt(cp,x) );

	//返回指定字符在此字符串中第一次出现处的下标
	// char cp[1000];
	// scanf("%[^\n]",cp);
	// while(getchar()!='\n');
	// char a;
	// scanf("%c",&a);
	// printf("%d\n",indexOf(cp,&a));

	// 返回指定字符在此字符串中第一次出现处的下标，从末尾处开始反向查找
	// char cp[1000];
	// scanf("%[^\n]",cp);
	// while(getchar()!='\n');
	// char a;
	// scanf("%c",&a);
	// printf("%d\n",LastIndexOf(cp,&a));

	//判断两个字符串是否相等
	// char str1[1000],str2[1000];
	// scanf("%[^\n]",str1);
	// while(getchar()!='\n');
	// scanf("%[^\n]",str2);
	// if(equals(str1,str2))
	// 	printf("相等\n");
	// else
	// 	printf("不相等\n");

	// 将目标字符串中包含的字符串替换为另一个字符串
	// char target[1000],old[1000],new[1000];
	// scanf("%[^\n]",target);
	// while(getchar()!='\n');
	// scanf("%[^\n]",old);
	// while(getchar()!='\n');
	// scanf("%[^\n]",new);
	// printf("%s\n",replace(target,old,new) );

	// 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值
	// char str1[1000],str2[1000];
	// scanf("%[^\n]",str1);
	// while(getchar()!='\n');
	// scanf("%[^\n]",str2);
	// int x=compare(str1,str2);
	// if(x>0)
	// 	printf("str1>str2\n");
	// if(x<0)
	// 	printf("str1<str2\n");
	// if(x==0)
	// 	printf("str1=str2\n");

    // 根据字母表，比较两个字符串，如果某一位置上两个字母不一致，返回差值(忽略大小写)
	// char str1[1000],str2[1000];
	// scanf("%[^\n]",str1);
	// while(getchar()!='\n');
	// scanf("%[^\n]",str2);
	// int x=compareIgnoreCase(str1,str2);
	// if(x>0)
	// 	printf("str1>str2\n");
	// if(x<0)
	// 	printf("str1<str2\n");
	// if(x==0)
	// 	printf("str1=str2\n");

	// 将double类型数字转换成字符串




	

	// 将传入字符串从指定位置切割，将分割后的字符串返回
	// char cp[1000];
	// int a,b;
	// scanf("%[^\n]",cp);
	// scanf("%d",&a);
	// scanf("%d",&b);
	// printf("%s\n", subString(cp,a,b));

	// 根据传入的字符串，将目标字符串分割，返回分割后的第一部分
	char target[1000],split[1000];
	scanf("%[^\n]",target);
	while(getchar()!='\n');
	scanf("%[^\n]",split);
	printf("%s\n", splitFirst(target,split));

	

	return 0;
}






























