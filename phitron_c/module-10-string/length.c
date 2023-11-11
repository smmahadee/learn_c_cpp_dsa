#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    fgets(name, 10, stdin);
    printf("%s\n", name);
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }

    printf("%d", count);
    
    
    return 0;
}