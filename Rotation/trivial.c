#include <stdio.h>
#include <stdlib.h>

void trivial(char *str1, int rotate, int d, int length)
{
	char* trivial_str = (char *)malloc(length + 1);

	if (d > 0)
	{
		for (int i = 0; i < length; i++)
		{
			if (i > rotate - 1)
				trivial_str[i - rotate] = str1[i];
			else
				trivial_str[i + (length - rotate)] = str1[i];
		}
		for (int i = 0; i < length; i++)
		{
			str1[i] = trivial_str;
		}
		return;
	}
	else if (d < 0)
	{
		for (int i = 0; i < length; i++)
		{
			if (i < (length - rotate))
				trivial_str[i + rotate] = str1[i];
			else
				trivial_str[i - (length - rotate)] = str1[i];
		}
		for (int i = 0; i < length; i++)
		{
			str1[i] = trivial_str;
		}
		return;
	}
}