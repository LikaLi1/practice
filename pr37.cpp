#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a[1000]; 

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int min_element = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min_element) {
            min_element = a[i];
        }
    }

    std::cout << "Min element: " << min_element << std::endl;

    return 0;
}
