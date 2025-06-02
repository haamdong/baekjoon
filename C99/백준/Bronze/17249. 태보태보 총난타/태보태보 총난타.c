#include <stdio.h>

int main() {
   char 태보[1000];
   int is_left = 1, is_right = 0;
   int 그건_제_잔상입니다만 = 0, 그것도_제_잔상입니다만 = 0;
   scanf("%s", 태보);
   int idx = 0;
   while (1) {
      if (is_left) {
         if (태보[idx] == '@')
            그건_제_잔상입니다만++;
         if (태보[idx] == '(')
            is_left = 0, is_right = 1;
         idx++;
      }
      if (is_right) {
         if (태보[idx] == '@')
            그것도_제_잔상입니다만++;
         idx++;
      }
      if (태보[idx] == '\0')
         break;
   }
   printf("%d %d", 그건_제_잔상입니다만, 그것도_제_잔상입니다만);

   return 0;
}