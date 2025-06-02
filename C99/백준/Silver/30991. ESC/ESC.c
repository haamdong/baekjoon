#include <stdio.h>

int main() {
   int n;
   long long a[30], b[30], c[30];
   scanf("%d", &n);
   a[0] = -1, b[0] = 1, c[0] = 1;
   for (int i = 1; i < n; i++) {
      a[i] = a[i - 1] - c[i - 1];
      b[i] = b[i - 1] + c[i - 1];
      c[i] = 2 * a[i - 1] - 2 * b[i - 1] + c[i - 1];
   }
   printf("%lld", a[n - 1] + b[n - 1] + c[n - 1]);

   return 0;
}
