#include <iostream>

int main() {
    int num;
    bool examination;

    do {
        std::cout << "Enter the number of actions: ";
        std::cin >> num;

        examination = (num % 2 == 0);

        if (examination) {
            std::cout << num << " is even" << std::endl;
        } else {
            std::cout << num << " is not even" << std::endl;
        }
    } while (num > 5);

    return 0;
}
