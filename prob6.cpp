#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max, min;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (i == 0)
        { // 맨처음 입력일 때 0 출력
            min = k;
            cout << "최대-최소: " << 0 << endl;
        }
        else if (i == 1)
        {
            if (k < min)
            {
                max = min;
                min = k;
                cout << "최대-최소: " << max - min << endl;
            }
            else
            { // (k>min)
                max = k;
                cout << "최대-최소: " << max - min << endl;
            }
        }
        else
        {
            if (k <= min)
            {
                min = k;
                cout << "최대-최소: " << max - min << endl;
            }
            else if (min < k && k < max)
            {
                cout << "최대-최소: " << max - min << endl;
            }
            else if (k >= max)
            {
                max = k;
                cout << "최대-최소: " << max - min << endl;
            }
        }
    }
    return 0;
}