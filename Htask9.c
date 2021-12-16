/* 9. Дефинирайте променливи със стойност
 4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
583 853.39875937284928422.
Изведете всяка променлива на екрана с printf() */

#include <stdio.h>

int main(void) {
    double ValueA = 4.9876543;
    long double ValueB = 7.123456789012345678890;   
    long double ValueC = 18398458438583853.28;  
    long double ValueD = 18398458438583853.39875937284928422;  

    printf("ValueA = %.7lf\n", ValueA);
    printf("ValueB = %.26Lf\n", ValueB);
    printf("ValueC = %0.2Lf\n", ValueC);
    printf("ValueD = %0.17Lf\n", ValueD);
    return 0;
}