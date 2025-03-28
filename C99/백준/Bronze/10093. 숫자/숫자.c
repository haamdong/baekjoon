#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b)
    {
        long long int tmp = a;
        a = b;
        b = tmp;
    }
    long long int count = (b - a - 1 > 0) ? (b - a - 1) : 0;
    printf("%lld\n", count);

    for (long long int i = a + 1; i < b; i++) 
    {
        printf("%lld ", i);
    }
    return 0;
}
