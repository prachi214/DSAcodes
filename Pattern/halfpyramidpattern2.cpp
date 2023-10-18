// Half Pyramid pattern 2
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
       for (int col = 1;col<=((2*r)+1);col++)
       {
    if (col%2 == 0)
    {
        if ((r+1)<10)
        {
           cout<<" * ";
        }
        else
        {
             cout<<" *";
        }
    }
    else
    {  
      cout<<(r+1);
    }
       }
       cout<<endl; 
    }    
}