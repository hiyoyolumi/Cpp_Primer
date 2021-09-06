#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string str;
    decltype(str.size()) n = 0;

    cin >> str;
    // getline(cin, str);

    for (auto &c : str)
    {
        c = 'X';
    }

    cout << str << endl;

    return 0;
}