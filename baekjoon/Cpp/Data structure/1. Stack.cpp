#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main()
{
    int num_value;
    vector<int> stack;
    string input_value;

    //input_repeat
    cin >> num_value;

    for (int i = 0; i < num_value; i++)
        {
            cin >> input_value;
            
            if (input_value == "push")
            {
                int number;
                cin >> number;
                stack.push_back(number);
            }

            else if (input_value == "pop")
            {
                if (stack.size() > 0)
                {
                    cout << stack.back() << endl;
                    stack.pop_back();
                }                    

                else if (stack.size() == 0)
                {
                    cout << "-1" << endl;
                }   
            }

            else if (input_value == "size")
            {
                cout << stack.size() << endl;
            }

            else if (input_value == "empty")
            {
                if (stack.size() > 0)
                {
                    cout << "0" << endl;
                }                    

                else if (stack.size() == 0)
                {
                    cout << "1" << endl;
                }   
            }

            else if (input_value == "top")
            {                
                if (stack.size() > 0)
                {
                    cout << stack.back() << endl;
                }                    

                else if (stack.size() == 0)
                {
                    cout << "-1" << endl;
                }   
            }
        }

    return 0;
}