#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            while (n--)
            {
                cout << "*";
            }
        }
        else
        {

            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    cout << "*";
                }

                else if (j != 1 || j != i)
                {
                    cout << " ";
                };
            }
            cout << endl;
        }
    }
    return 0;
}
