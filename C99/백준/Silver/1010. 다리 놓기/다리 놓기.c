#include <stdio.h>

int main()
{
	int n, m, t, k;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		long long int answer = 1;
		k = 1;
		scanf("%d %d", &n, &m);
		if (n == m)
		{
			printf("1\n");
			continue;
		}
		for (int j = m; j > m - n; j--)
		{
			answer *= j;
			if (k <= n)
				answer /= k;
			k++;
			//printf("answer %lld k %d\n", answer,k);
		}
		printf("%lld\n", answer);
		answer = 1;
	}

	return 0;
}
