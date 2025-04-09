#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, divisor;
	scanf("%d", &n);
	divisor = 2;

	if (n != 1)
	{
		while (n > 1)
		{
			if (n % divisor == 0) {
				printf("%d\n", divisor);
				n /= divisor;
			}
			else
			{
				divisor++;
			}
		}
	}

	return 0;
}