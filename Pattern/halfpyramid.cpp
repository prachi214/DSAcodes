// Half Pyramid
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
    
    
}