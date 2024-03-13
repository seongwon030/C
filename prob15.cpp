#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i < 10)
        {
            continue;
        }
        else
        {
            int k = i;
            while (true)
            {
                if (k / 10 == 0)
                {
                    break;
                }
                else
                {
                    if (k % 10 == 0)
                    {
                        cnt++;
                    }
                    k /= 10;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
