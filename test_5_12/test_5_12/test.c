#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>

int main()
{
	int a = time(NULL);
	printf("%d", a);
}