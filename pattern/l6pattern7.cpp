#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
        for(int i=1; i<=n; i++)
        {

          for(int j=1; j<=n-i; j++)
         {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}





// void starPyramidUp(int n) {
//     cout<<"Star Pyramid (Up):\n";
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) {
//             cout<<" ";
//         }
//         for(int j=1; j<=2*i-1; j++) {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// void starPyramidDown(int n) {
//     cout<<"\nStar Pyramid (Down):\n";
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i-1; j++) {
//             cout<<" ";
//         }
//         for(int j=1; j<=2*(n-i)+1; j++) {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// void numberPyramid(int n) {
//     cout<<"\nNumber Pyramid:\n";
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) {
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++) {
//             cout<<j;
//         }
//         cout<<"\n";
//     }
// }

// void hollowPyramid(int n) {
//     cout<<"\nHollow Pyramid:\n";
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) {
//             cout<<" ";
//         }
//         for(int j=1; j<=2*i-1; j++) {
//             if(i==1 || i==n || j==1 || j==2*i-1) {
//                 cout<<"*";
//             } else {
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
    
//     starPyramidUp(n);
//     starPyramidDown(n);
//     numberPyramid(n);
//     hollowPyramid(n);
    
//     return 0;
// }