#include <stdio.h>
#include <stdlib.h>

int compare(int* a, int* b)
{
    return (*a - *b);
}

int main()
{
    int arr[10], n, idx = 0;
    scanf("%d", &n);

    while (n)
    {
        arr[idx++] = n % 10;
        n /= 10;
    }
    qsort(arr, idx, sizeof(int), compare);

    for (int i = --idx; i >= 0; i--)
        printf("%d", arr[i]);

    return 0;
}
