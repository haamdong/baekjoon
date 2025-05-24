#include <stdio.h>

int main() {
   int n, zero_cnt = 0;
   scanf("%d", &n);

   while (n) {
      zero_cnt += n / 5;
      n /= 5;
   }
   printf("%d\n", zero_cnt);
    return 0;
}