#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    while (true)
    {
        k = n / 10;
        cout << n - (k * 10);
        n = k;
        if (k == 0)
        {
            cout << endl;
            break;
        }
    }
    return 0;
}