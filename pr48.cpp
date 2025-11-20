#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int max_idx = i; 
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_idx]) {
                max_idx = j; 
            }
        }
        swap(a[i], a[max_idx]);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
