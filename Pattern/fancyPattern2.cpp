#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
       int mid=0,a = 1, b=0,g = 0,p=0,q = 1;
       mid = (n/2);
    cout<<endl;
    int r;
    b = n;
    for ( r = 0; r <n; r++)
    {
if (r<mid)
{
for (int col = 1; col<=(2*r) +1; col++)
{
  if (col&1)
  {
    // odd colunm
cout<<a<<" ";
if (r== (mid-1) && col ==1)
{
p= a;
}
a++;
  }
  else
  {
    cout<<"* ";
  }  
}
cout<<endl;
}
else
{
   for (int col= 1;col<b; col++)
   {
   if (col&1)
  {
    // odd
    if (col == 1)
    {
    g = p;
    }
    cout<<g<<" ";
    g++;
  }
  else
  {
    cout<<"* ";
  }
   }
   cout<<endl; 
   b= b -2;
p = p - (mid - q);
  q++; 
}
}
}