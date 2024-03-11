#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> c;

    set<int> a = {1,
                  2,
                  4,
                  5};

    set<int> b = {1,
                  2,
                  6,
                  7};

    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));

    for (auto it = c.begin(); it != c.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}
1
