// full Pyramid

// isko check krna
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
       for (int col = 1;col<=n;col++)
       {
         if (col<=((n-1)-r))
         {
      
         cout<<" ";
         }
     
         else
         {
          cout<<"* ";  
         }
         
       }
       cout<<endl;
       
    }
    
    
}