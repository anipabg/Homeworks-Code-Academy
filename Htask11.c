/* 11. Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой. */

#include <stdio.h>
int main() {
    double PriceTomatos = 4.5;
    double PriceFlour = 1.8;
    double PriceYogurt = 0.50;
    double PriceIceCream = 0.60;
    double PriceCandy = 1.50;
    double PriceLollipops = 0.15;
    double quantityTomatos = 0;
    double quantityFlour = 0;
    int quantityYogurt = 0;
    int quantityIceCream = 0;
    double quantityCandy = 0;
    int quantityLollipops = 0;
    double totalSum = 0;
    printf("How much tomatoes do you like? Enter a value in kilos:\n");
    scanf("%lf",&quantityTomatos);
    printf("How much flour do you like? Enter a value in kilos:\n");
    scanf("%lf",&quantityFlour);
    printf("How many yogurts do you like? Enter how many pieces do you want:\n");
    scanf("%d",&quantityYogurt);
    printf("How many ice creams do you like? Enter how many pieces do you want:\n");
    scanf("%d",&quantityIceCream);
    printf("How much candy do you like? Enter a value in kilos:\n");
    scanf("%lf",&quantityCandy);
    printf("How many lollipops do you like? Enter how many pieces do you want:\n");
    scanf("%d",&quantityLollipops);
    totalSum = quantityTomatos * PriceTomatos + quantityFlour * PriceFlour + 
    quantityYogurt * PriceYogurt + quantityIceCream * PriceIceCream + 
    quantityCandy * PriceCandy + quantityLollipops * PriceLollipops;
    printf("Thank you for your order! You have to pay %.2f leva.\n", totalSum);

    return 0;
}