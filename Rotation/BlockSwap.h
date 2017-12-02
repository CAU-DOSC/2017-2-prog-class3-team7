#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BlockSwap(char *str, int n, int d, int data)
{
	char *TempStr = (char*)malloc((sizeof(char)*data) + 1);
	
	if (d > 0)//Clockwise Rotation
	{
		for (int i = 0;i < data;i++)//str�� �պκ� d��ŭ�� TempStr�� ����
			TempStr[i] = str[i];

		for (int i = 0;i < n - data;i++)//str�� �պκ� d��ŭ�� ������ �޺κ��� �������� ��ܿ�
			str[i] = str[i + data];

		for (int i = 0;i < data;i++)//str�� �޺κ� d��ŭ�� TempStr�� �������� ä��
			str[n - data + i] = TempStr[i];
	}
	else if (d < 0)//CounterClockwise Rotation
	{
		for (int i = 0;i < data;i++)//str�� �޺κ� d��ŭ�� TempStr�� ����
			TempStr[n - data + i] = str[i];

		for (int i = 0;i < n - data;i++)//str�� �޺κ� d��ŭ�� ������ �պκ��� �������� ��ܿ�
			str[n - i] = str[n - data - i];

		for (int i = 0;i < data;i++)//str�� �޺κ� d��ŭ�� TempStr�� �������� ä��
			str[i] = TempStr[i];
	}

	free(TempStr);
}