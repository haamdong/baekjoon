#include <stdio.h>
#include <string.h>

int issame(char arr[10][10][9])
{
    for (int i = 0; i < 10; i++)
    {
        int flag = 1;
        for (int j = 1; j < 10; j++)
        {
            if (strcmp(arr[i][j], arr[i][0]) != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            return 1;
    }

    for (int j = 0; j < 10; j++)
    {
        int flag = 1;
        for (int i = 1; i < 10; i++)
        {
            if (strcmp(arr[i][j], arr[0][j]))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            return 1;
    }

    return 0;
}

int main()
{
    char arr[10][10][9];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            scanf("%s", arr[i][j]);

    printf("%d\n", issame(arr));

    return 0;
}
