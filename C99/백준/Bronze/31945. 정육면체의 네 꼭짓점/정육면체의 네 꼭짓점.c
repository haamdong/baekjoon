#include <stdio.h>

int main() 
{
	int t, xcnt, ycnt, zcnt,a;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		xcnt = ycnt = zcnt = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a);
			if (a == 1)
				zcnt++;
			else if (a == 2)
				ycnt++;
			else if (a == 3)
				ycnt++, zcnt++;
			else if (a == 4)
				xcnt++;
			else if (a == 5)
				xcnt++, zcnt++;
			else if (a == 6)
				xcnt++, ycnt++;
			else if (a == 7)
				xcnt++, ycnt++, zcnt++;
		}
		if (xcnt == 4 || xcnt == 0 || ycnt == 4 || ycnt == 0 || zcnt == 0 || zcnt == 4)
			printf("YES\n");
		else
			printf("NO\n");
	}


	return 0;
}