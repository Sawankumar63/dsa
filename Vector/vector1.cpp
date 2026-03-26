#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //create vector with defined size
    vector<int> v(5);
    // create vector with define number
    vector<int> b={1,2,3,4,5};
    // create vector with undefine number and size
    vector<int> c;
    // create vectorwith user input size
    // int n;
    // cout<<"Enter the size of vector: ";
    // cin>>n;
    // vector<int> d(n);

    c.push_back(1);
    c.push_back(2);
    c.push_back(3);
    c.push_back(4);
    c.push_back(5);
    c.push_back(6);
    c.push_back(7);
    c.push_back(8);
    c.push_back(9);
    c.push_back(10);
    c.push_back(17);

    for (int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }

    cout<<endl;
    // using for each loop
    cout<<c.size()<<endl;
    cout<<c.capacity()<<endl;
    return 0;
    

}