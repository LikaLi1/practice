#include <iostream>

int main() {
    
    const int size = 10;
    int a[size];

    int n;
    std::cin >> n;
    
    double sum = 0;

    for (int i = 0; i < size - 1; i++){
        std::cin >> a[i];
        sum += a[i]; 
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
