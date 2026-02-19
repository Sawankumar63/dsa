#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (int j=0;j<=n;j++)
        {
            if (j==n-i || j==n+i-2)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

     for(int i=n-1;i>=1;i--)
    {
        for (int j=0;j<=n;j++)
        {
            if(j==n+i+3)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
      
    return 0;
    }
        
    