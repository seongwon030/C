#include <iostream>
#include <string>
using namespace std;

int main()
{
    int coef, expo_x, expo_y;
    cin >> coef >> expo_x >> expo_y;

    if (coef == 1)
    {
        if (expo_x == 0)
        {
            if (expo_y == 0)
            {
                cout << 1 << endl;
            }
            else if (expo_y == 1)
            {
                cout << "y" << endl;
            }
            else
            {
                cout << "y^" << expo_y << endl;
            }
        }
        else if (expo_x == 1)
        {
            if (expo_y == 0)
            {
                cout << "x" << endl;
            }
            else if (expo_y == 1)
            {
                cout << "xy" << endl;
            }
            else
            {
                cout << "xy^" << expo_y << endl;
            }
        }
        else
        {
            if (expo_y == 0)
            {
                cout << "x^" << expo_x << endl;
            }
            else if (expo_y == 1)
            {
                cout << "x^" << expo_x << "y" << endl;
            }
            else
            {
                cout << "x^" << expo_x << "y^" << expo_y << endl;
            }
        }
    }
    else if (coef == -1)
    {
        if (expo_x == 0)
        {
            if (expo_y == 0)
            {
                cout << -1 << endl;
            }
            else if (expo_y == 1)
            {
                cout << "-y" << endl;
            }
            else
            {
                cout << "-y^" << expo_y << endl;
            }
        }
        else if (expo_x == 1)
        {
            if (expo_y == 0)
            {
                cout << "-x" << endl;
            }
            else if (expo_y == 1)
            {
                cout << "-xy" << endl;
            }
            else
            {
                cout << "-xy^" << expo_y << endl;
            }
        }
        else
        {
            if (expo_y == 0)
            {
                cout << "-x^" << expo_x << endl;
            }
            else if (expo_y == 1)
            {
                cout << "-x^" << expo_x << "y" << endl;
            }
            else
            {
                cout << "-x^" << expo_x << "y^" << expo_y << endl;
            }
        }
    }
    else
    {
        if (expo_x == 0)
        {
            if (expo_y == 0)
            {
                cout << coef << endl;
            }
            else if (expo_y == 1)
            {
                cout << coef << "y" << endl;
            }
            else
            {
                cout << coef << "y^" << expo_y << endl;
            }
        }
        else if (expo_x == 1)
        {
            if (expo_y == 0)
            {
                cout << coef << "x" << endl;
            }
            else if (expo_y == 1)
            {
                cout << coef << "xy" << endl;
            }
            else
            {
                cout << coef << "xy^" << expo_y << endl;
            }
        }
        else
        {
            if (expo_y == 0)
            {
                cout << coef << "x^" << expo_x << endl;
            }
            else if (expo_y == 1)
            {
                cout << coef << "x^" << expo_x << "y" << endl;
            }
            else
            {
                cout << coef << "x^" << expo_x << "y^" << expo_y << endl;
            }
        }
    }

    return 0;
}