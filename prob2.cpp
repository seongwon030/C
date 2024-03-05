#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double result = 1 - pow(-1.0 / 2, n + 1);
    result = 2.0 / 3 * result;

    cout << fixed;
    cout.precision(4);
    cout << result << endl;

    return 0;
}
