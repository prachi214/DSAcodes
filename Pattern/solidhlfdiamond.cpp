// Solid half diamond 
#include<iostream>
using namespace std;
int main(){
    // always give input odd number 
    int n;
    cout<<"Enter n: ";
    cin>>n;
       int mid=0;
       mid = (n/2);
    cout<<endl;
    int r;
    for ( r = 0; r <mid; r++)
    {
       for (int col = 0;col<n;col++)
       {
    if (col==r || col<r)
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
    for (r = mid; r<n; r++)
    {
                 for (int col =1;col<=(n-r);col++)
       {
         cout<<"* ";
       }
       cout<<endl;
    }   
}