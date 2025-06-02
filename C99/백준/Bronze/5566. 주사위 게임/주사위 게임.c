#include <stdio.h>

int main() {
   int n, m, order[1000], dice_result[1000], curr_location = 0, cnt = 0;
   scanf("%d %d", &n, &m);
   for (int i = 0; i < n; i++)
      scanf("%d", &order[i]);
   for (int i = 0; i < m; i++) {
      scanf("%d", &dice_result[i]);
      //printf("first curr_location %d dice_result[i] %d order[curr_location] %d\n", curr_location, dice_result[i], order[curr_location + dice_result[i]]);
      cnt++;
      curr_location += dice_result[i];
      if (curr_location >= n - 1) {
         printf("%d", cnt);
         break;
      }
      //printf("second curr_location %d\n", curr_location);
      curr_location += order[curr_location];
      if (curr_location >= n - 1) {
         printf("%d", cnt);
         break;
      }
   }

   return 0;
}