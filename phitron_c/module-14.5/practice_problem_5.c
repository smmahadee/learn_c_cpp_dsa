#include <stdio.h>

char capital_to_small(char ch) {
    char capital_letter = ch + 32;
    return capital_letter;
}

int main(){
    char ch;
    scanf("%c", &ch);

    char small_letter = capital_to_small(ch);
    printf("%c\n", small_letter);
    
    return 0;
}