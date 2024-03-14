#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int k[n];

    int sum = 0;
    double avg = 0;
    double std_sum = 0;
    double std_distance = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        sum += k[i];
    }
    avg = sum / double(n);

    for (int j = 0; j < n; j++)
    {
        std_sum += ((k[j] - avg) * (k[j] - avg));
    }

    std_distance = sqrt(std_sum / double(n));

    cout << avg << " " << std_distance << endl;

    return 0;
}