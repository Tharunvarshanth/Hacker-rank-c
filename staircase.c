#include<stdio.h>
int main() {

   int i, j, no_of_spaces , spaceCount,n;
 scanf("%d",&n);
 no_of_spaces=n-1;
   for (i = 1; i <= n; i++) {
      for (spaceCount = no_of_spaces; spaceCount >= 1; spaceCount--) {
         printf(" "); //1spaces
      }

      for (j = 1; j <= i; j++) {
         printf("%c",'#');
      }

      printf("\n");
      no_of_spaces--;
   }
   return 0;
}
