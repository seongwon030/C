#include <iostream>
#include <vector>

using namespace std;

int compare(int a, int b)
{

    vector<int> arr1, arr2;
    while (a)
    {
        arr1.insert(arr1.begin(), a % 10);
        a /= 10;
    }
    while (b)
    {
        arr2.insert(arr2.begin(), b % 10);
        b /= 10;
    }

    // 길이가 작은 숫자의 길이만큼 반복
    // 첫 번째 수가 사전적으로 빠르면 -1 반환
    // 크면 1 반환

    int result = 0;
    int size1 = arr1.size(), size2 = arr2.size();
    int minSize = min(size1, size2);

    for (int i = 0; i <= minSize - 1; i++)
    {
        if (arr1[i] < arr2[i])
        {
            result = -1;
            break;
        }
        else if (arr1[i] > arr2[i])
        {
            result = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    // 같은 숫자가 나왔을 때
    // 길이가 길수록 사전적으로 뒤에 있음
    // 같으면 0
    if (result == 0)
    {
        if (size1 < size2)
            result = -1;
        else if (size1 > size2)
            result = 1;
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int result = compare(arr[i], arr[j]);
            if (result == -1 || result == 0)
            {
                continue;
            }
            else
            {
                cout << arr[i] << " " << arr[j] << endl;
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}