#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int move = 0;

    for (int i = 1; i < n; ++i) {
        int A = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > A) {
            arr[j + 1] = arr[j];
            move++;
            j--;
        }
        arr[j + 1] = A;
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << move << endl;

    delete[] arr;
    return 0;
}
