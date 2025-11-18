#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a[1000]; 

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int max_element = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[max_element]) {
            max_element = i;
        }
    }

    std::cout << "Index max element: " << max_element << std::endl;

    return 0;
}
