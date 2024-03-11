#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (1.0 / 3 * i <= j && j <= 2.0 / 3 * i && i * i + j * j <= 10000)
            {
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}