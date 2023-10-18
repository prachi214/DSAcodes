// hollow diamond

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
        // hollow full pyramid
        if (r <= ((n / 2) - 1))
        {
            for (int col = 1; col <= n; col++)
            {
                int i;

                if (col <= ((n - 1) - r))
                {
                    cout << " ";
                }
                else
                {
                    if (r > 1 && col == (((n - 1) - r) + 1))
                    {
                        for (i = 1; i <= ((2 * r) + 1); i++)
                        {
                            if (i == 1 || i == ((2 * r) + 1))
                            {
                                cout << "*";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                    }
                    else if (r < 2)
                    {
                        cout << "* ";
                    }
                }
            }
            cout << endl;
        }
        //  // hollow  inverted full pyramid
        else
        {
            // from n/2 row
            for (int col = 1; col <= n; col++)
            {
                if (col <= r && r > (n / 2) - 1)
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
                        if (r > ((n / 2) - 1) && col > ((n / 2) - 1))
                        {
                            cout << "  ";
                        }
                    }
                }
            }
            cout << endl;
        }
    }
}