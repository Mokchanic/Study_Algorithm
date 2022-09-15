#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 변수지정
    int repeat_number;
    string myBracket;

    cin >> repeat_number;
    cin.ignore();

    for(int i = 0; i < repeat_number; i++)
    {
        myBracket.clear();
        getline(cin, myBracket);
        int check = 0;

        for (int j = 0; j < myBracket.size(); j++)
        {
            if (myBracket[j] == '(')
            {
                check += 1;
            }

            else if (myBracket[j] == ')')
            {
                check -= 1;
            }

            if (check < 0)
            {
                cout << "NO\n";
                break;
            }
            
        }

        if (check > 0)
        {
            cout << "NO\n";
        }

        else if (check == 0)
        {
            cout << "YES\n";
        }

    }

    return 0;
}