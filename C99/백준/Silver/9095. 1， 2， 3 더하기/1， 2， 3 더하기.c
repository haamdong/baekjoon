#include <stdio.h>

int main() {
   int dp[11] = { 1, 2, 4, 7, }, t, n;
   scanf("%d", &t);

   for (int i = 4; i < 11; i++) {
      dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
   }
   for (int i = 0; i < t; i++) {
      scanf("%d", &n);
      printf("%d\n", dp[n - 1]);
   }

    return 0;
}