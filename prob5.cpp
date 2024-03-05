#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = -1;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k >= 0)
        {
            if (min == -1)
            {
                min = k;
            }
            else
            {
                if (k <= min)
                {
                    min = k;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    cout << min << endl;
}