#include <iostream>

int main() {
    int count = 0;

    std::cout << "Enter fabric length: ";
    int L;
    std::cin >> L;

    std::cout << "Enter pillow length: ";
    int P;
    std::cin >> P;

    while (L >= P) {
        L = L - P;   
        count = count + 1; 
    }

    std::cout << "Can be sewn " << count << " pillows" << std::endl;

    return 0;
}
