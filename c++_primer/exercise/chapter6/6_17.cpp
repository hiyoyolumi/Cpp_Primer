#include <iostream>
#include <string>

using namespace std;

bool is_cap(const string &s)
{
    for (auto a : s) {
        if (isupper(a)) {
            return true;
        }
    }
    return false;
}

void to_lower(string &s)
{
    for (auto &a : s) {
        a = tolower(a);
    }
}

int main()
{
    string str = "HaaaH";

    if (is_cap(str)) {
        cout << "str has caps" << endl;
    }
    to_lower(str);
    cout << str << endl;

    return 0;
}