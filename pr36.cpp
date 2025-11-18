#include <iostream>

int main() {
    double countNegative = 0;
    int n;
    std::cin >> n;

    int a[1000]; 

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            countNegative++;
        }
    }

    std::cout << "Sum of negative: " << countNegative << std::endl;

    return 0;
}
