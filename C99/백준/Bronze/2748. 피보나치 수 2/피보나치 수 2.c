#include <stdio.h>


int main() {
   long long dp[91] = { 0 };
   int n;
   dp[0] = 0, dp[1] = 1;
   scanf("%d", &n);

   for (int i = 2; i <= n; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
      //printf("dp[%d] %lld\n", i, dp[i]);
   }
   printf("%lld", dp[n]);
   return 0;
}
