#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[50];
    scanf("%s", input);

    int coef = 0;         // x항의 계수
    int const_term = 0;   // 상수항
    int i = 0;
    int len = strlen(input);

    while (i < len) {
        int sign = 1;
        int num = 0;
        int has_num = 0;

        if (input[i] == '+') {
            sign = 1;
            i++;
        } else if (input[i] == '-') {
            sign = -1;
            i++;
        }

        while (i < len && input[i] >= '0' && input[i] <= '9') {
            num = num * 10 + (input[i] - '0');
            has_num = 1;
            i++;
        }

        if (i < len && input[i] == 'x') {
            if (!has_num) num = 1;
            coef += sign * num;
            i++;
        } else {
            const_term += sign * num;
        }
    }

    // 계수와 상수 모두 0인 경우
    if (coef == 0 && const_term == 0) {
        printf("W\n");
        return 0;
    }

    int printed = 0;

    // 일차항 적분
    if (coef != 0) {
        int integral_coef = coef / 2;

        if (integral_coef == -1)
            printf("-xx");
        else if (integral_coef == 1)
            printf("xx");
        else
            printf("%dxx", integral_coef);

        printed = 1;
    }

    // 상수항 적분
    if (const_term != 0) {
        if (printed && const_term > 0)
            printf("+");

        if (const_term == -1)
            printf("-x");
        else if (const_term == 1)
            printf("x");
        else
            printf("%dx", const_term);
    }

    // 적분상수 W 출력
    printf("+W\n");

    return 0;
}
