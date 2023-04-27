#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char m[999999],c[999999];
    int x[26];
    int t, k, len, a = 0;
    printf("请输入你要输入的明文：");
    scanf("%s", m);
    len = strlen(m);
    printf("\n");

    printf("选择密钥长度：");
    scanf("%d", &k);
    t = k - len % k;
    printf("\n");

    printf("请输入你选择的密钥方式：\n");
    for (int i = 0; i < k; i++)
        scanf("%d", &x[i]);

    for (int j = 0; j < (len + t) / k; j++)
        for (int i = 0; i < k; i++)
        {
            c[a++] = m[x[i] + k * j - 1];
        }

    for (int i = 0; i <= len + t; i++)
        printf("%c", c[i]);
    printf("\n");

    return 0;
}