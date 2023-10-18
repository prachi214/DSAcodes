// diamond or solid diamond

// isko check krna
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << endl;
  int r;
  int mid = (n / 2) + 1;
  for (r = 0; r < n; r++)
  {
    //  mid-1 row
    if (r < mid - 1)
    {
      for (int col = 1; col <= n; col++)
      {
        if (col <= ((n - 1) - r))
        {
          cout << " ";
        }
        else
        {
          cout << "* ";
        }
      }
    }

    //  mid-1 row
    else
    {

      for (int col = 1; col<= n; col++)
      {
        if (col<= r)
        {
          cout << " ";
        }
        else
        {
          cout << "* ";
        }
      }
    }
    cout << endl;
  }
}