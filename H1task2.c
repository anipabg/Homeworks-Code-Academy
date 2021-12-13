#include <stdio.h>
#include <math.h>

int main()
{
    float iOunce;
    float iCountCups;
    printf("How many ounces do you like to order?");
    scanf("%f", &iOunce);
    iCountCups = iOunce / 8;
    iCountCups = ceil(iCountCups);
    if(iCountCups == 1){
      printf("You ordered %.0f cup.\n", iCountCups);
    }
    else printf("You ordered %.0f cups.\n", iCountCups);

    return 0;
}