// Butterfly Pattern

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  int mid = 0, a = 0;
  mid = (n / 2);
  cout << endl;
  int r;
  for (r = 0; r < n; r++)
  {
    int b = 1;
// (r/2)
    if (r < mid)
    {
      // left
      for (int col = 0; col < (n / 2); col++)
      {
        if (col == r || col < r)
        {
          cout << "* ";
        }
        else
        {
          cout << "  ";
        }
      }
      // right
      for (int col = 1; col <= mid; col++)
      {
        if (col <= (mid - (r + 1)))
        {
          cout << "  ";
        }
        else
        {
          cout << "* ";
        }
      }
    }

    // whwn r= n/2 se
    else
    {
      int m = 0;
      //  left
      for (int col = 1; col <= mid; col++)
      {
        if (col <= (n - r))
        {
          cout << "* ";
        }
        else
        {
          cout << "  ";
        }
      }
      //  right
      for (int col = 1; col <= mid; col++)
      {
        if (((r - mid) <= a) && ((r - mid) > 0))
        {
          while (b <= a)
          {
            cout << "  ";
            b++;
          }
        }
        if (col <= (mid - a))
        {
          cout << "* ";
        }
      }
      a++;
    }
    cout << endl;
  }
}