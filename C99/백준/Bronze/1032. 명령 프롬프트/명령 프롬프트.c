#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() 
{
	int n, flag = 0;
	scanf("%d", &n);
	char filename[51][51] = { 0 };
	for (int i = 0; i < n; i++)
		scanf("%s", filename[i]);
	for (int j = 0; j < strlen(filename[0]); j++)
	{
		for (int i = 1; i < n; i++)
		{
			if (filename[i][j] != filename[0][j])
				flag = 1;
		}
		if (flag)
			filename[50][j] = '?';
		else
			filename[50][j] = filename[0][j];
		flag = 0;
	}
	printf("%s", filename[50]);
		
    return 0;
}