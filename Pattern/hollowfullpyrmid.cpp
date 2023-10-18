// Hollow full Pyramid

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
                        // print star for 1st and last colunm
                        if (i == 1 || i == ((2 * r) + 1))
                        {
                            cout <<"*";
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
}