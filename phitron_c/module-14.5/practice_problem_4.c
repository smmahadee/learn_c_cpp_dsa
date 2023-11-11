#include <stdio.h>

char small_to_capital(char ch) {
    char small_letter = ch - 32;
    return small_letter;
}

int main(){
    char ch;
    scanf("%c", &ch);

    char capital_letter = small_to_capital(ch);
    printf("%c\n", capital_letter);
    
    return 0;
}