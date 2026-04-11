#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int row,col;
     cout<< "enter the Array size";
    cin>>row>>col;

     cout<< "enter the Array Element";
    vector<vector<int>> mat(row, vector<int>(col));
   
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
    
          cin>>mat[i][j];
        }
    }

    // wave column print krna hai 

    for(int j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            {
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--)
            {
                cout<<mat[i][j]<<" ";
            }
        }
       
    }
     return 0;

}