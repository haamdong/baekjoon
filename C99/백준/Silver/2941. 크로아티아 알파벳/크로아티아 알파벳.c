#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
    char arr[101];
    int idx = 0, cnt = 0, len = 0;
    scanf("%s", arr);
    len = strlen(arr);

    for (int i = 0; idx < len; i++)
    {
        if ((arr[idx] == 'c')&&((arr[idx+1] =='=')||(arr[idx+1] == '-')))
        {
            cnt++;
            idx += 2;
        }
        else if ((arr[idx] == 'd')&&(((arr[idx+1] == 'z')&&(arr[idx+2] == '=')) || (arr[idx + 1] == '-')))
        {
            cnt++;
            if (arr[idx + 1] == 'z')
                idx += 3;
            else if (arr[idx + 1] == '-')
                idx += 2;
        }
        else if ((arr[idx] == 'l')&&(arr[idx+1] == 'j'))
        {
            cnt++;
            idx += 2;
        }
        else if ((arr[idx] == 'n') && (arr[idx + 1] == 'j'))
        {
            cnt++;
            idx += 2;
        }
        else if ((arr[idx] == 's') && (arr[idx + 1] == '='))
        {
            cnt++;
            idx += 2;
        }
        else if ((arr[idx] == 'z') && (arr[idx + 1] == '='))
        {
            cnt++;
            idx += 2;
        }

        else
        {
            if (((arr[idx] >= 'a') && (arr[idx] <= 'z')) || ((arr[idx] >= 'A') && (arr[idx] <= 'Z')))
            {
                idx++;
                cnt++;
            }
            else
                idx++;
        }
    }
    printf("%d", cnt);
    return 0;
}