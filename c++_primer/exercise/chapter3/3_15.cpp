#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> strs;
    string s;

    while (cin >> s) {
        strs.push_back(s);
    }

    return 0;
}