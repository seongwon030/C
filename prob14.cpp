#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int cnt = 0;
    for (int i = 2; i <= 98; i++)
    {
        for (int j = i + 1; j <= 99; j++)
        {
            for (int k = j + 1; k <= 100; k++)
            {
                if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) == 1)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}