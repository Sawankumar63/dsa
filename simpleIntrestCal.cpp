#include<iostream>
using namespace std;
int main()
{
    float p,r,t,sp;
    cout<<"Enter principle ammount:";
    cin>>p;
     cout<<"Enter rate of intrest:";
    cin>>r;
     cout<<"Enter Time(In year):";
    cin>>t;
    sp=(p*r*t)/100;
    cout<<"Simple Interest = "<<sp<<endl;
    return 0;


}