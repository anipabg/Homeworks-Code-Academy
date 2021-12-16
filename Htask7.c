/* 7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf() */


#include <stdio.h>
int main() {   
    int iValue = 24212;
    signed int  siValue = -1357674;
    unsigned int  uiValue = 1357674;
    signed long int sliValue = -1357674000;
    unsigned long int uliValue = 3657895000;

    printf("iValue = %d\n", iValue);
    printf("siValue = %d\n", siValue);
    printf("uiValue = %u\n", uiValue);
    printf("sliValue = %ld\n", sliValue);
    printf("uliValue = %lu\n", uliValue);
    return 0;
}