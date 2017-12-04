#include <stdio.h>
#include <stdlib.h>

void reverse(char *str1, int length, int d)
{
	char *rev_str_A = (char*)malloc(d + 1);
	char *rev_str_B = (char*)malloc(length-d+1);
	int j = length - d;
	if (d > 0)
	{
		for (int i = 0; i < d; i++)
		{
			{
				for (int i = 0; i < d; i++)
					rev_str_A[d-i-1] = str1[i];

				for (int i = d; i < length; i++)
				{
					rev_str_B[j-1] = str1[i];
					j--;
				}
			}
		}
		return;
	}
	else if (d < 0)
	{
		for (int i = 0; i < d; i++)
		{
			
		}
		return;
	}
}
