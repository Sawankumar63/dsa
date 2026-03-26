#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    // 🔸 User input
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 🔸 Insertion Sort
    for(int i = 1; i < n; i++) {
        int key = arr[i];   // current element
        int j = i - 1;

        // shift elements
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        // insert at correct position
        arr[j+1] = key;
    }

    // 🔸 Output
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}