#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int m=(n+1)/2;
    
        for(int i=1;i<=m;i++)
        {
          for (int j=1;j<=m-i;j++)
          {
                cout<<"  ";
            }

            if (i==1)
            {
                cout<<"* ";
            }
            else
            {
              cout<<"* ";
              for (int j=1;j<=2*i-3;j++)
              {
                cout<<"  ";
              }
              cout<<"* ";
            }
            
                /* code */
            
  return 0;
        }
}