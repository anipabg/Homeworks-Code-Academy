/* 10. Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които
клиента дължи на компанията. Принтирайте резултата. */
//caravan, camper
#include <stdio.h>
#include <string.h>  


int main(void) {
    int caravanLeft = 3;
    int camperLeft = 3;
    int caravanPrice = 90;
    int camperPrice = 100;
    char vehicleType[7];
    int totalPrice = 0;
    int true = 1;
    int caravan = 1;
    int camper = 1;
    int end = 1;
    int daysCaravan = 0;
    int daysCamper = 0;
    
    while (true == 1)
    {
        printf("Do you want to rent a camper or caravan? Please type camper/caravan/end!\n");
        scanf("%s", vehicleType);
        
        caravan = strcmp(vehicleType, "caravan");
        camper = strcmp(vehicleType, "camper");
        end = strcmp(vehicleType, "end");
        if (caravan == 0 && caravanLeft > 0)
        {
            
            printf("Please type for how many nights do you want to rent the caravan?\n");
            scanf("%d", &daysCaravan);
            totalPrice +=caravanPrice * daysCaravan;
            caravanLeft -=1;
            printf("You have rented one caravan. It's price is 90 leva.\n");
            printf("Thank you for the order! Your have to pay: %i leva.\n", totalPrice);
        }
        else if (caravan == 0)
        {
            printf("There are no caravans left.\n");
        }
        
        if (camper == 0 && camperLeft > 0)
        {
            
            printf("Please type for how many nights do you want to rent the camper?\n");
            scanf("%d", &daysCamper);
            totalPrice +=camperPrice * daysCamper;
            camperLeft -=1;
            printf("You have rented one camper. It's price is 100 leva.\n");
            printf("Thank you for the order! Your have to pay: %i leva.\n", totalPrice);
        }
        else if (camper == 0)
        {
            printf("There are no campers left.\n");
        }
        
        if (totalPrice == 0)
        {
            printf("You didn't buy anything.\n");
            break;
        }
        else if (end == 0)
        {
            printf("Thank you for the order! Your have to pay: %i leva.\n", totalPrice);
            break;
        }
    }
}