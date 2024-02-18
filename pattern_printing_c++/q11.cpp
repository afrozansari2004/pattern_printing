#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int j = n; j >= 1; j--)
    {
        for (int k = 65; k + j <= 65 + n; k++)
        {
            cout << char(k);
        }
        for (int i = 0; i < j - 1; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
