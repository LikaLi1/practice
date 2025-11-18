#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int* a = new int[n]; 
    double sum = 0;

    for (int i=0; i<n; i++){
        std::cin >> a[i];
        sum += a[i];
    }

    double avg = sum / n;
    std::cout << "Average: " << avg;

    return 0;
}
