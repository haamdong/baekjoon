#include <stdio.h>
#include <stdlib.h>  

int compare(const void* a, const void* b) {
   if (*(int*)a > *(int*)b)
      return 1;
   else if (*(int*)a < *(int*)b)
      return -1;
   else
      return 0;
}
int main() {
   int l, s[50], n, start_idx = 0, end_idx = 0, start_val, end_val;
   scanf("%d", &l);
   for (int i = 0; i < l; i++) scanf("%d", &s[i]);
   scanf("%d", &n);
   qsort(s, l, sizeof(int), compare);

   for (int i = 0; i < l; i++) {
      if (s[i] > n) {
         start_val = s[i - 1] + 1, end_val = s[i];
         break;
      }
   }
   if (s[0] > n)
      start_val = 1;
   int answer = 0;

   for (int i = start_val; i < end_val && i <= n; i++) {
      for (int j = i + 1; j < end_val; j++) {
         if (j >= n) {
            //printf("[%d, %d]\n", i, j);
            answer++;
         }
      }
   }
   printf("%d", answer);
}
