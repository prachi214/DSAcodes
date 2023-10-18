// numeric hollow half pyramid

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
        for (int col = 1; col <= ((2 * r) + 1); col++)
        {
            if (col % 2 != 0 && r != (n - 1))
            {
                if (col == 1 || col == ((2 * r) + 1))
                {
                    cout << a;
                    a++;
                }
                else
                {
                    cout << "  ";
                    a++;
                }
            }
            else if (r == (n - 1) && col <= n)
            {
                cout << col;
                cout << "  ";
            }

            else
            {
                if (r != (n - 1))
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}