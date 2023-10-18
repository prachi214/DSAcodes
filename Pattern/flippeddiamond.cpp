// flipped diamond

#include <iostream>
using namespace std;

int main()
{
  int n, b = 1;
  cout << "Enter n: ";
  cin >> n;
  cout << endl;
  int r;
  for (r = 0; r < n; r++)
  {
if (r < (n / 2))
    {
      for (int col = 1; col <= (n / 2); col++)
      {

        if (col <= ((n / 2) - r))
        {
          // left
          cout << "* ";
        }
        else
        {
          cout << "  ";
        }
      }
      for (int col = 1; col <= ((n / 2) + 1); col++)

      {
        if (col <= (r + 1))
        {

          cout << "  ";
        }
        else
        {
          // right
          cout << "* ";
        }
      }
}
      // from (n/2) row
 else
    {

      for (int col = 1; col <= (n / 2); col++)
      {
        // left
        if (col <= b)
        {
          cout << "* ";
        }

        else
        {
          // c
          cout << "  ";
        }
      }
      // right
      for (int col = 1; col <= (n / 2) + 1; col++)
      {
        if (col <= (n - r))
        {
          cout << "  ";
        }
        else
        {
          cout << "* ";
        }
      }
      b++;
}
    cout << endl;
  }
}