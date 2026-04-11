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
}
