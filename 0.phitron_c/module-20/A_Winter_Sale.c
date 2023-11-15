#include <stdio.h>

int main() {
    float discount, price;
    scanf("%f %f", &discount, &price);

    float priceBeforeDiscount = 100 / (100 - discount) * price;
    printf("%.2f", priceBeforeDiscount);

    return 0;
}