#include <stdio.h>

int main() 
{
    int n, arr[1000], max = 0;
    float new_arr[1000], avg = 0.0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    
    for (int i = 0; i < n; i++) 
    {
        new_arr[i] = (float)arr[i] / max * 100;
        avg += new_arr[i];
    }
    
    printf("%.2f", avg / n);
    return 0;
}
