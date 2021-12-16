/* 6. Дефинирайте променливи със стойност -127, 255, 63 498, 4 294 967 292, -9 000
000 000 000 775 845.
Изведете всяка променлива на екрана със printf() */


#include <stdio.h>
int main() {
    signed short int ssiValue = -127;
    unsigned short int usiValue = 255;
    int iValue = 63498;
    unsigned int  uiValue = 4294967292;
    signed long long int slliValue = -9000000000000775845;
    
    printf("ssiValue = %d\n", ssiValue);
    printf("usiValue = %d\n", usiValue);
    printf("iValue = %d\n", iValue);
    printf("uiValue = %u\n", uiValue);
    printf("slliValue = %lld\n", slliValue);
    return 0;
}