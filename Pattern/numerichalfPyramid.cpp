// Numeric Hlaf Pyramid

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
       for (int col = 1;col<=(r+1);col++)
       {

         cout<<col<<" ";
       }
       cout<<endl;
       
    }
    
    
}