#include <iostream>
#include <string>
#include <cctype>
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

    for (int i=0; i<strs.size(); i++) {
        for (auto &a : strs[i]) {
            if (islower(a)) {
                a = toupper(a);
            }
        }
        cout << strs[i] << " " << endl;
    }

    return 0;
}