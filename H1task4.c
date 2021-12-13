#include <stdio.h>
int addDigit(int a, int b); 
int main() {
  int a = 1, b = 4;
  addDigit (a,b);
  int result = addDigit(1,4);
  printf("res = %d\n", result);
  return 0;
}
int addDigit(int a, int b){ 
  return a + b;
}