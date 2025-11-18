#include <iostream>

int main() {
    
    int n;
    std::cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        a[i] = a[i] * 2;
        std::cout << a[i] << " ";
    }

    std::cout << std::endl; 

    return 0;
}
