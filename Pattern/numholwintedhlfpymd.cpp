// Numeric hollow  inverted half Pyramid

#include <iostream>
   #include "assert.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    assert(n<=10);
    cout << endl;
    int r;
    for (r = 0; r < n; r++)
    {
        for (int col = 1; col <= (n - r); col++)
        {
            if (col == 1)
            {
                if (r == (n - 2))
                {
                    cout << (r + 1) << " ";
                }
                else
                {
                    cout << (r + 1) << " ";
                }
            }
            else if (col == (n - r))
            {
                if (r > 0)
                {
                    cout << " ";
                    cout << n;
                }
                else
                {
                    cout << n;
                }
            }

            else
            {
                if (col == 2)
                {
                    if (r > 0)
                    {
                        cout << "  ";
                        cout << " ";
                    }
                    else
                    {
                        cout << " ";
                        cout << col <<" ";
                    }
                }
                else
                {
                    if (r > 0 && r < (n - 2))
                    {
                        cout << "  ";
                    }
                    else
                    {
                        cout << col << " ";
                    }
                }
            }
        }
        cout << endl;
    }
}