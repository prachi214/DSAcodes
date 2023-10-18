#include<iostream>
using namespace std;

int main(){
    // total no. of row and columns where row == col
    int rowcolTotal;
    cout<<"Enter rowcolTotal: ";
    cin>>rowcolTotal;
    cout<<endl;
    int r;
    // int n = 4;
        int n = (rowcolTotal/2 + 1);
    for ( r = 0; r <rowcolTotal; r++)
    {
       for (int col = 0;col<rowcolTotal;col++)
       {
int left = col;
int right = (rowcolTotal-1) - col;
int top= r;
int bottom = (rowcolTotal- 1) - r;
cout<<(n - min(min(left,right),min(top,bottom)))<<" ";   
    }
    cout<<endl;
}
}