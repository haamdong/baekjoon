#include <stdio.h>

int main() {
   int n, stock[200000];
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &stock[i]);
   }
   int max_num = -1, ans = 0;

   for (int i = n - 1; i >= 0; i--) {
      if (stock[i] > max_num)
         max_num = stock[i];
      if (max_num - stock[i] > ans)
         ans = max_num - stock[i];
   }
   printf("%d", ans);
}
