#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ת���ַ�
int main()
{

	printf("c:\test\\test.c\n");
	printf("ab\ncd");
	printf("(are you ok??)\n");//  ??) -- ] - ����ĸ��
	printf("%c\n",'\'');
	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("\a\a\a");
	printf("%c\n", '\101');//�˽��Ƶ�101�Ƕ���ʮ����
	printf("%d\n", '\x1');//�˽����Ƕ���ʮ������
	printf("%d\n", '\A');
	printf("%d\n", strlen("c:\test\328\test.c"));
	//printf�ڴ�ӡ���ݵ�ʱ��,����ָ����ӡ�ĸ�ʽ

	return 0;
}
 

//%d ����
	//printf("%d\n", 100);
//%c  �ַ�   
	//printf("%c\n",'a');
//%s  �ַ���
	//printf("%s\n", "abc");



