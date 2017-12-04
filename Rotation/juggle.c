#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2)
{
	int num_gcd;
	for (int i = 1; i < (num1 > num2 ? num1 : num2); i++)
	{
		if ((num1%i == 0) && (num2&i == 0))
			num_gcd = i;
	}
	return num_gcd;
}

void juggle(char *str1, int length, int d)
{
	int i, j, k, temp, g;
	if (d > 0)
	{
		for (i = 0; i < gcd(d, length); i++)
		{
			temp = str1[i];
			j = i;
			while (1)
			{
				k = j + d;
				if (k >= length)
					k = k - length;

				if (k == i)
					break;

				str1[j] = str1[k];
				j = k;
			}
			str1[j] = temp;
		}
	}
	else
	{
		d = -d;
		i = 0;
		while (i < gcd(d, length))
		{
			g = length - 1;
			temp = str1[g];
			j = g;
			while (1)
			{
				k = j - d;
				if (k < 0)
					k = k + length;
				if (k == i)
					break;
				str1[j] = str1[k];
				j = k;
			}
			str1[j] = temp;
			i++;
		}
	}
	return;
}

