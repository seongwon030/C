#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string line;
    getline(cin, line); // 한 라인 입력

    stringstream ss(line); // 입력된 라인은 stringstream으로 변환
    string word;
    string re;
    bool firstWord = true;
    int length = 0;

    while (ss >> word)
    {
        if (!firstWord)
        {
            re += " "; // 첫번째 단어가 아니라면 공백 하나추가
        }
        else
        {
            firstWord = false; // 첫번째 단어라면 false
        }
        re += word;                // 결과에 단어 추가
        length += word.size() + 1; // length 에 단어길이 +1 (공백포함)
    }
    cout << re << ":" << length - 1 << endl; // 문장끝은 공백없으므로 length-1 출력
    return 0;
}
