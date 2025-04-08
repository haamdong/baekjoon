#include <stdio.h>
#include <string.h>	

int main()
{
	int t, arr[82], idx, max;
	scanf("%d", &t);
	char n[81], m[81];

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 82; j++)
			arr[j] = 0;
		idx = 0;
		scanf("%s %s", n, m);

		for (int j = strlen(n) - 1; j >= 0; j--)
			arr[idx++] = n[j] - '0';

		max = idx;
		idx = 0;

		for (int j = strlen(m) - 1; j >= 0; j--)
			arr[idx++] += m[j] - '0';

		if (idx > max)
			max = idx;

		for (int j = 0; j <= max; j++)
		{
			if (arr[j] >= 2)
			{
				arr[j] -= 2;
				arr[j + 1]++;
				if (j + 1 > max)
					max++;
			}
		}

		int start = max;
		while (start > 0 && arr[start] == 0)
			start--;

		if (start == 0 && arr[0] == 0)
			printf("0");
		else
		{
			for (int j = start; j >= 0; j--)
				printf("%d", arr[j]);
		}
		printf("\n");
	}

	return 0;
}
