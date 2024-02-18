#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= n; ++j)
            {
                cout << "*";
            }
        }
        else
        {
            for (int k = 1; k <= n; ++k)
            {
                cout << i;
            }
        }

        cout << endl;
    }

    return 0;
}
