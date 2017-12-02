#include <stdio.h>
#include <stdlib.h>

void juggle(char *str1, int d, int length)
{
	char* juggle = (char *)malloc(length + 1);

	if (d > 0)
	{
		for (int i = 0; i < length; i++)
		{
			if (i > d - 1)
				juggle[i - d] = str1[i];
			else
				juggle[i + (length - d)] = str1[i];
		}
		for (int i = 0; i < length; i++)
		{
			str1[i] = juggle[i];
		}
		return;
	}
	else if (d < 0)
	{
		for (int i = 0; i < length; i++)
		{
			if (i < (length - (-d)))
				juggle[i + (-d)] = str1[i];
			else
				juggle[i - (length - (-d))] = str1[i];
		}
		for (int i = 0; i < length; i++)
		{
			str1[i] = juggle[i];
		}
		return;
	}

}