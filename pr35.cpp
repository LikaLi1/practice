#include <iostream>

int main() {
    double countZeros = 0;
    int n;
    std::cin >> n;

    int a[1000]; 

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            countZeros++;
        }
    }

    std::cout << "Sum of zeros: " << countZeros << std::endl;

    return 0;
}
