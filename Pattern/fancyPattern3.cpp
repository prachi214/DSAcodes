// fancy Pattern 3

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
       int mid=0,a = 1,m = 0,h = 0,q = 0,b = 1,g= 0;
       mid = (n/2);
       g = (mid);
    cout<<endl;
    int r;
   m = n-2;
    for ( r = 0; r <n; r++)
    {
            a = 1;
            h = (2*r) + 1;
            b= 1;

            // r <= mid tk
if (r<=mid)
{
for (int col = 1; col<= h; col++)
{
  if (col == 1 || col == h)
  {
 cout<<"* ";
  }
  else if (col == 2 || col == (h-1))
  {
cout<<"1 ";
  }
  else
  {
      a++;
    if (col<= (r+1))
    {
  cout<<a<<" ";
  q = a;
    }
    else
    {
        q = q - 1;
        cout<<q<<" ";
    } 
  } 
}
cout<<endl;
}

// r == mid+1 part se
else
{
   for (int col= 1;col<=m; col++)
   {

  if (col == 1 || col == m)
  {
 cout<<"* ";
  }
  else if (col == 2 || col == (m-1))
  {
cout<<"1 ";
  }
  else
  {
      if (col<=(g))
    {
        b++;
  cout<<b<<" ";
  q = b;
    }
    else
    {
        q = q - 1;
        cout<<q<<" ";
    } 
  }    
}
cout<<endl;
m = m-2;
g--;
}
    }
}