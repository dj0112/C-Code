#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//转义字符
int main()
{

	printf("c:\test\\test.c\n");
	printf("ab\ncd");
	printf("(are you ok??)\n");//  ??) -- ] - 三字母词
	printf("%c\n",'\'');
	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("\a\a\a");
	printf("%c\n", '\101');//八进制的101是多少十进制
	printf("%d\n", '\x1');//八进制是多少十六进制
	printf("%d\n", '\A');
	printf("%d\n", strlen("c:\test\328\test.c"));
	//printf在打印数据的时候,可以指定打印的格式

	return 0;
}
 

//%d 整型
	//printf("%d\n", 100);
//%c  字符   
	//printf("%c\n",'a');
//%s  字符串
	//printf("%s\n", "abc");



