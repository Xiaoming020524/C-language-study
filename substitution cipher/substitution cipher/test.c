#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char m[999999],c[999999];
    int x[26];
    int t, k, len, a = 0;
    printf("��������Ҫ��������ģ�");
    scanf("%s", m);
    len = strlen(m);
    printf("\n");

    printf("ѡ����Կ���ȣ�");
    scanf("%d", &k);
    t = k - len % k;
    printf("\n");

    printf("��������ѡ�����Կ��ʽ��\n");
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