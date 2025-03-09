#include <stdio.h>
#include <string.h>

int stack[100000];
int top = -1;

static int IsEmpty()
{
	if (top < 0)
		return 1;
	else
		return 0;
}
static int IsFull()
{
	if (top >= 49)
		return 1;
	else
		return 0;
}
static void push(int n)
{
	stack[++top] = n;
}
static void pop()
{
	if (!IsEmpty())
		printf("%d\n", stack[top--]);
	else {
		printf("-1\n");
	}
}


int main()
{
	int n,npush;
	scanf("%d", &n);
	char order[6] = { 0 };
	
	for (int i = 0; i < n; i++)
	{
		scanf("%s", order);
		if (strcmp(order,"push") == 0)
		{
			scanf("%d", &npush);
			push(npush);
		}
		else if (strcmp(order, "pop") == 0)
		{
			pop();
		}
		else if (strcmp(order,"size") == 0)
		{
			printf("%d\n", top + 1);
		}
		else if (strcmp(order, "empty") == 0)
		{
			printf("%d\n", IsEmpty());
		}
		else if (strcmp(order, "top") == 0)
		{
			if (IsEmpty() == 1)
				printf("-1\n");
			else
				printf("%d\n", stack[top]);
		}
	}
	
	return 0;
}