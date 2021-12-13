#include <stdio.h>
int main() {
  float fDaysEarth;
  float fYearJupiter;
  float fResult;
  printf("How many days on Earth do you want to convert?\n");
  scanf("%f", &fDaysEarth);
  fYearJupiter = 4383;
  fResult = fDaysEarth / fYearJupiter;

  printf("%.0f days on Earth are %f years on Jupiter.\n",fDaysEarth ,fResult);
  return 0;
}