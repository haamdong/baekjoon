#include <stdio.h>
#include <stdlib.h>

int compare(int* a, int* b)
{
    return (*a - *b);
}

int main()
{
    int arr[1000], n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);

    printf("%d", arr[n - k]);

    return 0;
}
