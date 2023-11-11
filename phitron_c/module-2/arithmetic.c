#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 9;
    int sum  = num1 + num2;
    int mns = num1 - num2;
    float dvd = num1 * 1.0 / num2;
    int mlt =  num1 * num2;
    int mod = num1 / num2;

    printf("your sume is - %d\n", sum);
    printf("your subtract value is - %d\n", mns);
    printf("your dvd value is - %f\n", dvd);
    printf("your mlt value is - %d\n", mlt);
    printf("your mod value is - %d\n", mod);
    
    
    return 0;
}