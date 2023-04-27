#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <stdlib.h>

int main()
{
	char small_letter[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char big_letter[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char text[1000], result[1000];
	int c, count = 0, k, p;
	char function;
	printf("Insert Text:");
	c = getchar();
	while (1)
	{
		if (c == '\n') break;
		text[count] = c;
		printf("%c", text[count]);
		count++;
		c = getchar();
	}

	printf("\n");
	printf("Encrypt or Decrypt? E or D :");
	scanf("%c", &function);
	if (function == 'E')
	{
		printf("Insert Key :");
		scanf("%d", &k);
		for (int i = 0; i < count; i++)
		{
			if (text[i] >= 'A' && text[i] <= 'Z')
			{
				result[i] = big_letter[((text[i] - 'A') + k) % 26];
			}

			else if (text[i] >= 'a' && text[i] <= 'z')
			{
				result[i] = small_letter[((text[i] - 'a') + k) % 26];
			}
			else result[i] = text[i];
			printf("%c", result[i]);
		}
	}

	else
	{
		printf("Insert Key :");
		scanf("%d", &k);
		for (int i = 0; i < count; i++)
		{
			if (text[i] >= 'A' && text[i] <= 'Z')
			{
				p = ((text[i] - 'A') - k);
				while (p < 0)p += 26;
				result[i] = big_letter[p];
			}

			else if (text[i] >= 'a' && text[i] <= 'z')
			{
				p = ((text[i] - 'a') - k);
				while (p < 0)p += 26;
				result[i] = small_letter[p];
			}
			else result[i] = text[i];
			printf("%c", result[i]);
		}
		printf("\n");
	}
	return 0;
}