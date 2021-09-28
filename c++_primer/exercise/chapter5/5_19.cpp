#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stra, strb, rsp;

    do {
        cout << "please input two numbers : ";
        cin >> stra >> strb;
        cout << (stra.size() > strb.size() ? strb : stra) << endl;
        cout << "continue ? (\"no\" to quit) : ";
        cin >> rsp;
    } while (rsp != "no");

    return 0;
}