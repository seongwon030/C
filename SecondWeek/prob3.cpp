#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    ifstream file("input3.txt");
    file.is_open();

    vector<string> arr;

    map<string, int> wordCount;

    while (file >> word)
    {
        for (char &c : word)
        {
            c = tolower(c);
        }
        arr.push_back(word);
        wordCount[word]++;
    }
    file.close();

    vector<pair<string, int>> sortedWords(wordCount.begin(), wordCount.end());
    sort(sortedWords.begin(), sortedWords.end(), [](const pair<string, int> &a, const pair<string, int> &b)
         { return a.second > b.second; });
    for (const auto &pair : sortedWords)
    {
        cout << pair.first << ":" << pair.second << endl;
    }
    return 0;
}