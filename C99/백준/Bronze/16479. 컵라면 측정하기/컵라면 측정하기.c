#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
    int k, d1, d2;
    scanf("%d", &k);
    scanf("%d %d", &d1, &d2);
    printf("%f", k * k - (d1-d2)*(d1-d2)/4.0);

    return 0;
}