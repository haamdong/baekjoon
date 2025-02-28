#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() 
{
    char password[101] = { 0 };
    int n, cnt = 0, flag = 0;
    scanf("%d", &n);
    scanf("%s", password);

    for (int i = 0; i < n; i++) //숫자
        if (password[i] >= '0' && password[i] <= '9')
            flag = 1;
    if (!flag)
        cnt++;
    flag = 0;

    for (int i = 0; i < n; i++) // 영소문자
        if (password[i] >= 'a' && password[i] <= 'z')
            flag = 1;
    if (!flag)
        cnt++;
    flag = 0;

    for (int i = 0; i < n; i++) // 영대문자
        if (password[i] >= 'A' && password[i] <= 'Z')
            flag = 1;
    if (!flag)
        cnt++;
    flag = 0;
    for (int i = 0; i < n; i++)
        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' ||
            password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' ||
            password[i] == '-' || password[i] == '+')
            flag = 1;
    if (!flag)
        cnt++;
    while (strlen(password) + cnt < 6)
        cnt++;
    printf("%d", cnt);


    return 0;
}