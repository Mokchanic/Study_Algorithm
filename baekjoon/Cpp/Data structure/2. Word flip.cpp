#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // 변수 설정
    int repeat_number;
    string sentence;
    stack <char> word;

    cin >> repeat_number; // 반복횟수 입력
    cin.ignore(); // 버퍼 비우기

    for (int i = 0; i < repeat_number; i++)
    {
        getline(cin, sentence); // 문자열 입력
        sentence += ' ';        // 문장의 끝 변화를 알기 위해 추가

        for (int j = 0; j < sentence.size(); j++) // sentence size만큼 반복
        {
            if (sentence[j] == ' ')
            {
                while(!word.empty()) //word가 비워질 때까지 반복
                {
                    cout << word.top(); // 맨 뒤의 스택 출력
                    word.pop(); // 맨 뒤의 스택 제거
                }cout << ' ';
            }
            else
            {
                word.push(sentence[j]); // 처음에 word에 단어 저장
            }
        }cout << "\n";
    }    
}