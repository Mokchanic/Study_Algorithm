#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int repeat_num;
    int stack_num;
    int count = 1;

    int CheckOutput = 0; // false

    vector<int>  number;
    vector<char> output;

    cin >> repeat_num;

    for (int i = 0; i < repeat_num; i ++)
    {
        cin >> stack_num;

        while (count <= stack_num)
        {
            number.push_back(count);
            output.push_back( '+' );
            count ++;
        }

        if (number.back() == stack_num)
        {
            number.pop_back();
            output.push_back( '-' );
        }

        else
        {
            cout << "NO\n";
            CheckOutput = 1; // True
            break;
        }
    
    }

    if (CheckOutput == 0)
    {
        for (int j = 0; j < output.size(); j++)
        {
            cout << output[j] << '\n';
        }
    }
}