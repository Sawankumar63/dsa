#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    // 🔸 Linear Search
    for (int i=0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout<<-1 << endl; // not found
    return 0;   
    
    
}