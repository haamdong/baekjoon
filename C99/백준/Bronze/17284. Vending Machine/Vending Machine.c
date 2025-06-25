   #include <stdio.h>

   int main() {
      int inp, ans = 5000, price[] = { 500,800,1000 };
      while (scanf("%d", &inp) != EOF) {
         ans -= price[inp - 1];
      }
      printf("%d", ans);
   }
