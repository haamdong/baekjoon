   #include <stdio.h>

   int main() {
      int book[200001] = { 0 }, n, m;
      scanf("%d %d", &n, &m);
      for (int i = 0; i < m; i++) {
         int k, s, e;
         scanf("%d %d %d", &k, &s, &e);

         if (s >= book[k]) {
            printf("YES\n");
            book[k] = e;
         }
         else {
            printf("NO\n");
         }
      }
   }
