#include <stdio.h>

int main() {
   int l, p, v, i = 1;
   while (1) {
      scanf("%d %d %d", &l, &p, &v);
      if (l + p + v == 0)
         break;
       int na = v % p > l ? l : v % p;
      printf("Case %d: %d\n", i++, l * (v / p) + na);
   }
}
