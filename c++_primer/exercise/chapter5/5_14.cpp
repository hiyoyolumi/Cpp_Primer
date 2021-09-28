#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, temp_str, max_str;
    int max_num = 1, num = 1;

    cin >> temp_str;
    max_str = temp_str;
    while (cin >> str) {
        if (temp_str == str) {
            ++num;
            continue;
        }
        if (num > max_num) {
            max_str = temp_str;
            max_num = num;
        }
        temp_str = str;
        num = 1;
    }

    cout << "word \""<< max_str << "\" has appearred for " << max_num << endl;

    return 0;
}