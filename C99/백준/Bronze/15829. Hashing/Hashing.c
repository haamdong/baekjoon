#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MOD 1234567891
#define R 31

int main()
{
    int l;
    long long hash_val = 0, r_pow = 1;
    char word[51];

    scanf("%d", &l);
    scanf("%s", word);

    for (int i = 0; i < l; i++)
    {
        int char_value = word[i] - 'a' + 1;
        hash_val = (hash_val + (char_value * r_pow) % MOD) % MOD;
        r_pow = (r_pow * R) % MOD;
    }

    printf("%lld\n", hash_val);

    return 0;
}