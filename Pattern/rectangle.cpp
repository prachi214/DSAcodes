#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter totalrow n and totalcolumn m: ";
    cin>>n;
       cin>>m;
    cout<<endl;
    int r;
    for ( r = 0; r<n; r++)
    {
       for (int col = 0;col<m;col++)
       {
     cout<<"* ";
       }
       cout<<endl;
       
    }
    
    
}