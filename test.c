#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short a, b, c = 0;
	scanf("%hd\n""%hd", &a,&b);
	c = a + b;
	printf("a=%d\tb=%d\tc=a+b=%d\n", a, b, c);
	system("pause");
}

