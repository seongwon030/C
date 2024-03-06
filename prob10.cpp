#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int v = 1;
    for (int i = 1; i < N; i++)
    {
        i *= 2;
        if (v > N)
        {
            cout << v << endl;
            break;
        }
        else
        {
            v *= 2;
        }
    }
    while (v > 0)
    {
        if (N >= v)
        {
            N = N - v;
            cout << 1;
            v /= 2;
        }
        else
        {
            cout << 0;
            v /= 2;
        }
    }

    return 0;
}