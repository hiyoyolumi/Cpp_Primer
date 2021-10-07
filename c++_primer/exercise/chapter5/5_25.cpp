#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int i, j;

    cout << "Please input two numbers:" << endl;
    while (cin >> i >> j) {
        try {
            if (j == 0) {
                throw runtime_error("divisor is 0");
            }
            cout << i / j << endl;
        } catch (runtime_error err) {
            cout << err.what() << "\n" << "Enter y or n" << endl;
            char c;
            cin >> c;
            if (c == 'n') {
                break;
            }
        }
        cout << "Please input two numbers:" << endl;
    }

    return 0;
}