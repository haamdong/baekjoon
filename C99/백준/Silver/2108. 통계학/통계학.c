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
   int n, arr[500000], cnt_arr[8001] = { 0 }, median, mode = -4001, scope, cnt = 0, max_cnt = 0;
   double mean = 0;
   scanf("%d", &n);
   for (int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
      cnt_arr[arr[i] + 4000]++;
      mean += arr[i];
   }
   qsort(arr, n, sizeof(int), compare);
   
   /*for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   printf("\n");*/

   // 산술평균
   mean = mean / n;
   if (mean < 0 && mean > -0.5)
      mean = 0;
   // 중앙값
   median = arr[n / 2];

   // 최빈값
   for (int i = 0; i < 8001; i++) {
      if (cnt_arr[i] > max_cnt) {
         max_cnt = cnt_arr[i];
         mode = i - 4000;
         cnt = 1;
      }
      else if (cnt_arr[i] == max_cnt && cnt == 1) {
         mode = i - 4000;
         cnt++;
      }
   }

   // 범위
   scope = arr[n - 1] - arr[0];

   printf("%.lf\n", mean);
   printf("%d\n", median);
   printf("%d\n", mode);
   printf("%d\n", scope);
}
