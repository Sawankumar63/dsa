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
    //shorting the array for binary search
    sort(arr, arr+n);

    //store shorting array
    cout << "Sorted array: ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    //strat

        int key;

    cout << "Enter key: ";
    cin >> key;
    int s=0;
    int e=n-1;
    while (s<=e){
        int mid = s +(e-s)/2;
        if(key == arr[mid]){
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (key < arr[mid])
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }   
    }
       cout << "Element not found"<<-1 << endl;
    return 0;
    

}