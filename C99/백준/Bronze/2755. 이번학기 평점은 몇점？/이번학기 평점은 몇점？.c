#include <stdio.h>

int main()
{
	int n, credit = 0, arr[] = {4,3,2,1};
	char inp[101], g[3];
	float gpa = 0, grade = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int c;
		scanf("%s %d %s", inp, &c, g);
		credit += c;
		if (g[0] == 'F')
		{
			continue;
		}
		else
		{
			grade += c * arr[g[0] - 'A'];
			if (g[1] == '+')
				grade += c * 0.3;
			else if (g[1] == '-')
				grade -= c * 0.3;
		}
	}
	gpa = grade / credit;
	printf("%.2f", gpa);
	
	return 0;
}