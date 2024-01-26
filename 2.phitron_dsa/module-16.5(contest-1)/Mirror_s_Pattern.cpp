#include <iostream>

void generatePattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }

        // Print spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            std::cout << " ";
        }

        // Print decreasing numbers
        for (int l = i; l >= 1; l--) {
            if (l != n) {
                std::cout << l << " ";
            }
        }

        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;

    generatePattern(n);

    return 0;
}
