#include <iostream>
using namespace std;

int main() {
    const int rows = 8;
    const int cols = 8;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                cout << "♙"; 
            } else {
                cout << "♟"; 
            }
        }
        cout << endl;
    }

    return 0;
}
