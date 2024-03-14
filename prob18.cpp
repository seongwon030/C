#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int a[size] = {0};
    int n;
    cin >> n;

    while (true)
    {
        if (n / 10 == 0)
        {
            a[n % 10]++;
            break;
        }
        else
        {
            a[n % 10]++;
            n /= 10;
            if (n == 0)
            {
                a[n % 10]++;
                break;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}