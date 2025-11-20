#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                swap(a[j], a[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        
        if (!swapped) 
        {
            break;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << swapCount << endl;

    return 0;
}
