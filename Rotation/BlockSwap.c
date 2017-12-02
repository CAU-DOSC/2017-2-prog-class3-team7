#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BlockSwap(char *str, int n, int d, int data)
{
	char *TempStr = (char*)malloc((sizeof(char)*data) + 1);
	
	if (d > 0)//Clockwise Rotation
	{
		for (int i = 0;i < data;i++)//str의 앞부분 d만큼을 TempStr에 저장
			TempStr[i] = str[i];

		for (int i = 0;i < n - data;i++)//str의 앞부분 d만큼을 제외한 뒷부분을 앞쪽으로 당겨옴
			str[i] = str[i + data];

		for (int i = 0;i < data;i++)//str의 뒷부분 d만큼을 TempStr의 내용으로 채움
			str[n - data + i] = TempStr[i];
	}
	else if (d < 0)//CounterClockwise Rotation
	{
		for (int i = 0;i < data;i++)//str의 뒷부분 d만큼을 TempStr에 저장
			TempStr[n - data + i] = str[i];

		for (int i = 0;i < n - data;i++)//str의 뒷부분 d만큼을 제외한 앞부분을 뒷쪽으로 당겨옴
			str[n - i] = str[n - data - i];

		for (int i = 0;i < data;i++)//str의 뒷부분 d만큼을 TempStr의 내용으로 채움
			str[i] = TempStr[i];
	}

	free(TempStr);
}