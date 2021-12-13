#include <stdio.h>
int main() {
  float fWeighEarth;
  float fWeighMoon;
  printf("What  is your weigh on Earth?\n");
  scanf("%f", &fWeighEarth);
  fWeighMoon = fWeighEarth * 0.83;
  printf("Your weigh on the Moon is %.2f.\n", fWeighMoon);
  return 0;
}
