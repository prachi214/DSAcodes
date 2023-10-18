// Numeric Hlaf Pyramid in Character case

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
        char alphabet = 'A';
        for (int col = 1; col <= (r + 1); col++, alphabet++)
        {

            cout << alphabet << " ";
        }
        char alphabet2 = alphabet - 2;
        for (int col = 1; col <= r; col++, alphabet2--)
        {
            if (r > 0)
            {
                cout << alphabet2 << " ";
            }
        }
        cout << endl;
    }
}