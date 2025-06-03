#include <stdio.h>


int main() {
   long long dp[40];
   dp[0] = 1, dp[1] = 1;
   int n;
   scanf("%d", &n);
   for (int i = 2; i <= n; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
   }
   printf("%lld", dp[n]);

   return 0;
}
