#include <iostream>

int main() {
    int x;
    std::cin >> x; 
    bool found = false;

    int n;
    std::cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i]; 
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] == x) { 
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
