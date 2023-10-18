#include<iostream>
#include "assert.h"
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    assert(n<=9);
    cout<<endl;
    int r;
    for ( r = 0; r <n; r++)
    {
        // First part
       for (int col = 1;col<=((n*2)-(r+2));col++)
       {
         cout<<"* ";
       }

  // 2 part
for (int col = 1;col<= ( (2*r) + 1);col++)
{
    // if col&1 true means col is odd
    // & operator use to find any integer value is even or odd

            if (col&1)
         {
      
         cout<<(r+1)<<" ";
         }
     
         else
         {
          cout<<"* ";  
         }
}
  // 3 part
       for (int col = 1;col<=((n*2)-(r+2));col++)
       {
         cout<<"* ";
       }
       cout<<endl;
       
    }   
}