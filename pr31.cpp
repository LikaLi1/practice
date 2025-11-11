#include <iostream>
#include <algorithm> 

int main() {
    std::cout << "Enter first number: ";
    int A;
    std::cin >> A;

    std::cout << "Enter second number: ";
    int B;
    std::cin >> B;

    int max_val = std::max(A, B);
    int min_val = std::min(A, B);

    for (int num = min_val; num <= max_val; ++num) {
        int count = 0;
        for (int i = 1; i <= num; ++i) {
            if (num % i == 0) count++;
        }
        std::cout << "Divisors for number " << num << " - " << count << std::endl;
    }

    return 0;
}
