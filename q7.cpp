#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            cout << " ";
        }

        for (int k = i; k <= 5; ++k)
        {
            cout << "1";
        }

        cout << endl;
    }

    return 0;
}
