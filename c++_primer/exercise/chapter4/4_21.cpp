#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};

    for (auto &a : vec) {
        a = (a % 2 == 0) ? a : a*2;
    }

    for (auto a : vec) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}