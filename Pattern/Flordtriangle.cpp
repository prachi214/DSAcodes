// Floyad triangle

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    int r =0,a= (r+1);
    for ( r = 0; r <n; r++)
    {
       for (int col = 1;col<=(r+1);col++)
       {
         cout<<a<<" ";
         a++;
       }
       cout<<endl;
       
    }
    
    
}