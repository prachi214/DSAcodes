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
        if (r==0 || r==(n-1))
        {
            cout<<"* ";
        }
        else
        {
            if (col==0 || col==(n-1))
            {
              cout<<"* ";
            }
            else
            {
                  cout<<"  ";
            }
            
            
        }
       }
       cout<<endl;
       
    }
    
    
}