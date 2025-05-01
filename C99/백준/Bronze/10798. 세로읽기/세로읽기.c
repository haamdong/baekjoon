#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main() 
{
    char matrix[5][17] = { 0 };
    int max_len = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", matrix[i]);
        if (strlen(matrix[i]) > max_len)
            max_len = strlen(matrix[i]);
    }

    for (int j = 0; j < max_len; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            {
                if (matrix[i][j] != '\0')
                    printf("%c", matrix[i][j]);
            }
        }
    }

    return 0;
}

