// Numeric Palindrom Equilateral Pyramid


#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << endl;
  int r;
  for (r = 0; r < n; r++)
  {
    int a = 1;
    for (int col = 1; col <= n; col++)
    {
      if (col <= (n - (r + 1)))
      {
        cout << "  ";
      }
      else
      {
        if (a > 9)
        {
          cout << a;
          cout<<"";
          a++;
        }
        else
        {
          cout << a;
          cout << " ";
          a++;
        }
         // Ye bhi right h when you want to remove this condion >9 so you can comment out this and remove above if and else statement
         
        // cout<<a;
        //  cout<<" ";
        // a++;
      }
    }
    int b = r;
    for (int col = 1; col <= n; col++, b--)
    {
      if (col == r || col < r)
      {
        if (b > 9)
        {
          cout << b;
          cout << "";
        }
        else
        {
          cout << b;
          cout << " ";
        }
        // Ye bhi right h when you want to remove this condion >9 so you can comment out this and remove above if and else statement
        //  cout<<b;
        //             cout<<" ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}