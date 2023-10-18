#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    int r;
    for ( r = 0; r <n; r++)
    {
       for (int col = 0;col<n;col++)
       {
     cout<<"* ";
       }
       cout<<endl;
       
    }
    
    
}