// Hollow inverted  full Pyramid

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
      for (int col = 1; col <= n; col++)
      {
         if (col <= r && r > 0)
         {
            cout << " ";
         }
         else
         {
            if (col == (r + 1) || col == n)
            {
               cout << "* ";
            }
            else
            {
               cout << "  ";
            }
         }
      }
      cout << endl;
   }
}