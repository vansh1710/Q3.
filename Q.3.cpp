#include <stdio.h>

int main() {
      double applePrice = 50.0;
    double mangoPrice = 35.0;
    double potatoPrice = 10.0;
    double tomatoPrice = 15.0;

      double appleQuantity = 2.0;
    double mangoQuantity = 1.5;
    double potatoQuantity = 2.5;
    double tomatoQuantity = 1.0;

      double totalCostApple = appleQuantity * applePrice;
    double totalCostMango = mangoQuantity * mangoPrice;
    double totalCostPotato = potatoQuantity * potatoPrice;
    double totalCostTomato = tomatoQuantity * tomatoPrice;

      double totalCost = totalCostApple + totalCostMango + totalCostPotato + totalCostTomato;

      double currencyGiven = 500.0;

      double amountToReturn = currencyGiven - totalCost;

      if (amountToReturn >= 0) {
        printf("Amount to be returned to Mr. X: Rs. %.2lf\n", amountToReturn);
    } else {
        printf("Mr. X does not have enough money to cover the cost.\n");
    }

    return 0;
}

