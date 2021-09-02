#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main()
{
    string str = "value";
    str[5] = '\0';
    cout << "size of str = " << str.size() << endl;

    return 0;
}