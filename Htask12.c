/* 12. Напишете програма PrintPatterns, която отпечата следните текстови графики
на екрана. Графиките една под друга: */
#include <stdio.h>
int main() {
   int rows = 6, i, j, k, space;
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("# ");
      for (j = 0; j < i - 1; ++j)
         printf("# ");
         printf("\n");
   }

   printf("(a)\n");

   int g, space2, rows2 = 6, m = 0;
   for (g = 1; g <= rows2; ++g, m = 0) {
      for (space2 = 1; space2 <= rows2 - g; ++space2) {
         printf("  ");
      }
      while (m != 2 * g - 1) {
         printf("# ");
         ++m;
      }
      printf("\n");
   }

   printf("(b)\n");

 
   for (g = 1; g <= rows2; ++g, m = 0) {
      for (space2 = 1; space2 <= rows2 - g; ++space2) {
         printf("  ");
      }
      while (m != 2 * g - 1) {
         printf("# ");
         ++m;
      }
      printf("\n");
   }
  
   for (i = 5; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("# ");
      for (j = 0; j < i - 1; ++j)
         printf("# ");
         printf("\n");
   }
   printf("(c)\n");
   return 0;
}
