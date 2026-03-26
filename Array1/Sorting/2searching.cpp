#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key, i;
    bool found = false;

    cout << "Enter element to search: ";
    cin >> key;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(found == false)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}