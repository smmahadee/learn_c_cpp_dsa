// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 100; i = i + 1) {
//         if (i == 50) break;
//         printf("%d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        continue;
        a++;
    }
    
    printf("%d %d",i,a);
    return 0;
}