/* Упражнение 13. Напишете програма, която изчислява броя на секундите в една
година. */

#include <stdio.h>
int main() {
    unsigned int  uiSecondsInACommonYear = 0;
    unsigned int  uiSecondsInALeapYear = 0;
    short int iDaysInACommonYear = 365;
    short int iDaysInALeapYear = 366;
    short int iHoursInADay = 24;
    short int iMinutesInAHour = 60;
    short int iSecondsInAMinute = 60;
    uiSecondsInACommonYear = iDaysInACommonYear * iHoursInADay * iMinutesInAHour * iSecondsInAMinute;
    uiSecondsInALeapYear = iDaysInALeapYear * iHoursInADay * iMinutesInAHour * iSecondsInAMinute;
   
    printf("A common year has %u seconds. If the year is leap, it has %u seconds.\n", 
    uiSecondsInACommonYear, uiSecondsInALeapYear);
    return 0;
}