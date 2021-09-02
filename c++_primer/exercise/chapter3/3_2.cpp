#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

// int main()
// {
//     string str;
//     while(getline(cin, str))
//     {
//         cout << str <<endl;
//     }

//     return 0;
// }

int main()
{
    string str;
    while(cin >> str)
    {
        cout << str << endl;
    }

    return 0;
}