// // using vector
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int n_repeat;
//     vector<int> my_vector;
//     string value_input;

//     cin >> n_repeat;

//     for (int i = 0; i < n_repeat; i++)
//     {
//         cin >> value_input;

//         if (value_input == "push")
//             {
//                 int number;
//                 cin >> number;
//                 my_vector.push_back(number);
//             }
        
//         else if (value_input == "pop")
//         {
//             if (my_vector.size() > 0)
//             {
//                 cout << my_vector[my_vector.size() - 1] << endl;
//                 my_vector.pop_back();
//             }
//             else if (my_vector.size() == 0)
//             {
//                 cout << "-1" << endl;
//             }
//         }

//         else if (value_input == "size")
//         {
//             cout << my_vector.size() << endl;
//         }

//         else if (value_input == "empty")
//         {
//             if (my_vector.size() > 0)
//             {
//                 cout << "0" << endl;
//             }
//             else if (my_vector.size() == 0)
//             {
//                 cout << "1" << endl;
//             } 
//         }

//         else if (value_input == "top")
//         {
//             if (my_vector.size() > 0)
//             {
//                 cout << my_vector.back() << endl;
//             }
//             else if (my_vector.size() == 0)
//             {
//                 cout << "-1" << endl;
//             } 
//         }

//     }

//     return 0;
// }

// // using stack
// #include <iostream>
// #include <stack>

// using namespace std;

// int main()
// {
//     //발생하는 딜레이를 줄여주는 역할
//     ios::sync_with_stdio(0);
//     //cin과 cout의 묶음을 풀어줌.
//     cin.tie(0);
    
//     int n_repeat;
//     stack<int> my_stack;
//     string value_input;
    
//     cin >> n_repeat;

//     for(int i; i < n_repeat; i++)
//     {
//         cin >> value_input;

//         if (value_input == "push")
//         {
//             int number;
//             cin >> number;
//             my_stack.push(number);
//         }

//         else if (value_input == "pop")
//         {
//             if (my_stack.size() > 0)
//             {
//                 cout << my_stack.top() << endl;
//                 my_stack.pop();
//             }
//             else if (my_stack.size() == 0)
//             {
//                 cout << "-1" << endl;
//             }
//         }

//         else if (value_input == "size")
//         {
//             cout << my_stack.size() << endl;
//         }

//         else if (value_input == "empty")
//         {
//             if (my_stack.size() > 0)
//             {
//                 cout << "0" << endl;
//             }
//             else if (my_stack.size() == 0)
//             {
//                 cout << "1" << endl;
//             }
//         }

//         else if (value_input == "top")
//         {            
//             if (my_stack.size() > 0)
//             {
//                 cout << my_stack.top() << endl;
//             }
//             else if (my_stack.size() == 0)
//             {
//                 cout << "-1" << endl;
//             }
//         }
//     }

//     return 0;
// }

// using list
#include <iostream>
#include <list>

using namespace std;


int main()
{
    //발생하는 딜레이를 줄여주는 역할
    ios::sync_with_stdio(0);
    //cin과 cout의 묶음을 풀어줌.
    cin.tie(0);

    int n_repeat;
    string value_input;
    list<int> my_list;

    cin >> n_repeat;

    while(n_repeat--)
    {
        cin >> value_input;

        if (value_input == "push")
            {
                int number;
                cin >> number;
                my_list.push_back(number);
            }
        
        else if (value_input == "pop")
        {
            if (my_list.size() > 0)
            {
                cout << my_list.back() << endl;
                my_list.pop_back();
            }
            else if (my_list.size() == 0)
            {
                cout << "-1" << endl;
            }
        }

        else if (value_input == "size")
        {
            cout << my_list.size() << endl;
        }

        else if (value_input == "empty")
        {
            if (my_list.size() > 0)
            {
                cout << "0" << endl;
            }
            else if (my_list.size() == 0)
            {
                cout << "1" << endl;
            } 
        }

        else if (value_input == "top")
        {
            if (my_list.size() > 0)
            {
                cout << my_list.back() << endl;
            }
            else if (my_list.size() == 0)
            {
                cout << "-1" << endl;
            } 
        }
    }

    return 0;
}
