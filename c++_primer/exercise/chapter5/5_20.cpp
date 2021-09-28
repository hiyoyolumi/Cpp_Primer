#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stra, strb;
    int flag = 0;

    while (cin >> stra) {
        if (stra == strb) {
            flag = 1;
            cout << stra << endl;
            break;
        }
        strb = stra;
    }

    if (flag == 0) {
        cout << "NO" << endl;
    }

    return 0;
}