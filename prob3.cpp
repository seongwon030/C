#include <iostream>
#include <cmath>
using namespace std;

int Fac(int k)
{
    if (k == 1)
    {
        return 1;
    }
    return k * Fac(k - 1);
}

int main()
{
    int n;
    cin >> n;
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / Fac(i));
    }
    cout << fixed;
    cout.precision(4);
    cout << sum << endl;
    return 0;
}