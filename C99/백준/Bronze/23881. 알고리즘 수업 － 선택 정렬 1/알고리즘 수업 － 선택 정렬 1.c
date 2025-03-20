#include <stdio.h>

int main(void)
{
    int n, k, cnt = 0;
    int arr[10000];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // A[1..N]을 1-indexed처럼 처리하기 위해 last는 n-1부터 1까지 반복
    for (int last = n - 1; last >= 1; last--)
    {
        int maxIdx = 0;
        // A[0..last] 중 가장 큰 값을 찾음
        for (int i = 1; i <= last; i++)
        {
            if (arr[i] > arr[maxIdx])
                maxIdx = i;
        }
        if (last != maxIdx)
        {
            // 교환
            int tmp = arr[last];
            arr[last] = arr[maxIdx];
            arr[maxIdx] = tmp;
            cnt++;
            
            if (cnt == k)
            {
                // 출력 시 작은 수부터 출력
                if (arr[last] < arr[maxIdx])
                    printf("%d %d", arr[last], arr[maxIdx]);
                else
                    printf("%d %d", arr[maxIdx], arr[last]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
