#include<stdio.h>
#include<string.h>
int main()
{
	//ָ��ֵ��6487552(&�����ַ) 
	int a=0;
	printf("&a=%d\n",&a);
	//����δ��ʼ�� 
	int b[]={1,2};
	printf("b[]=%d%d\n",b[0],b[1]);
	//string.h
	char str1[]={'a','2'};
	char str2[]="hello world";
	printf("str1[]=%s\nstr2[]=%s",str1,str2);
	return 0;
}
//sizeof��C���Ե�һ�ֵ�Ŀ������ 
//sizeof��type�� 
