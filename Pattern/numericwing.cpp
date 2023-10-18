// numeric wing pyramid pattern

#include<iostream>
using namespace std;
#include<assert.h>
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
       assert(n<=20);
    int r,b= (n/2)-2,g=1;
    for ( r = 0; r <n; r++)
    {
        if (r<(n/2))
        {

        
        int totalcol = (r+1);
       for (int col = 0;col< totalcol;col++)
       {
    if (col== totalcol-1)
    {
         cout<<r+1 ;
    }
    else
    {
        // 8
        if (r<9)
        {
                cout<<r+1<<" a ";
        }
        else
        {
                  cout<<r+1<<"a ";
        }
        
    //   cout<<r+1<<" a ";
    }
    
       }
        }
        else
        {
for ( int col = 1; col<= (2*b)+1;col++)
{
   if (col%2 == 0)
   {

   cout<<" b ";
   }
   else
   {
    // if ((n/2)-g<10)
    // {
    //        cout<<(n/2)-g<<" ";
    // }
    // else
    // {
    //      cout<<(n/2)-g;
    // }
    

       cout<<(n/2)-g;
   }
   
   
}

        
g++;
b--;
        }
        
       cout<<endl;
       
    }
   
    
}