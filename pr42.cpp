#include <iostream>
#include <algorithm> 

int main() {
    int n;
    std::cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i]; 
    }

    std::sort(a, a + n);

    int x;
    std::cout << "Enter x: ";
    std::cin >> x; 

    int line = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            line = i;
            break; 
        }
    }

    if (line != -1)
        std::cout << "Found at position: " << line << std::endl;
    else
        std::cout << "Not found" << std::endl;

    int l = 0;
    int r = n - 1;
    int bin = -1;

    while (l <= r) {
        int mi = (l + r) / 2;

        if (a[mi] == x) {
            bin = mi;
            break; 
        } else if (a[mi] < x) {
            l = mi + 1;
        } else {
            r = mi - 1;
        }
    }

    if (bin != -1)
        std::cout << "Found at position: " << bin << std::endl;
    else
        std::cout << "Not found" << std::endl;

    return 0;
}
