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
     
    // Pehle normal matrix print karo
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // New matrix jaisa same array dubara print
    cout << "\nNew Matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
     
    // wave row print krna hai 
    
   cout << "\nRow-wise Wave Print:\n";    for(int i=0;i<col;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<col;j++)
            {
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1;j>=0;j--)
            {
                cout<<mat[i][j]<<" ";
            }
        }
       
    }
     return 0;

}