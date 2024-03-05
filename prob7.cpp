#include <iostream>
using namespace std;

int main()
{
    int first_year, first_month, first_day;
    int second_year, second_month, second_day;

    cin >> first_year >> first_month >> first_day >> second_year >> second_month >> second_day;
    if (first_year < second_year)
    {
        cout << -1 << endl;
    }
    else if (first_year > second_year)
    {
        cout << 1 << endl;
    }
    else
    {
        if (first_month < second_month)
        {
            cout << -1 << endl;
        }
        else if (first_month > second_month)
        {
            cout << 1 << endl;
        }
        else
        {
            if (first_day < second_day)
            {
                cout << -1 << endl;
            }
            else if (first_day > second_day)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}