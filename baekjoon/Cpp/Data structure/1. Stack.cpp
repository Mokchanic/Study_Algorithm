#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

#define SIZE = 100000;

int main()
{

    int num_value;

    //input_repeat
    cin >> num_value;

    for (int i = 0; i < num_value; i++)
        {
            string input_value;
            cin >> input_value;
            cout << input_value << endl;
            cout << sizeof(input_value) << endl;
        }

    return 0;
}