#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, strs;

    while (cin >> str)
    {
        strs += str;
        strs += " ";    //
    }
    cout << strs << endl;

    return 0;
}