#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string str, result;

    // cin >> str;
    getline(cin, str);

    for (auto c : str)
    {
        if(!ispunct(c))
        {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}