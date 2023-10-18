// make pascal triangle through formula 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    int r;
    for ( r = 1; r <=n; r++)
    {
        int C  = 1;
       for (int col = 1;col<=r;col++)
       {
     cout<<C<<" ";
     C = C * (r-col)/col;
       }
       cout<<endl;
       
    }
    
    
}