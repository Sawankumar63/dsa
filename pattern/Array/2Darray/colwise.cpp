#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11,12},
        {13, 14, 15, 16}
    };

    int rows = 4, cols = 4;

    for (int j = 0; j < cols; j++) {

        // Agar column even hai to upar se niche
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        }

        // Agar column odd hai to niche se upar
        else {
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}