#include <iostream>

using namespace std;

int main()
{
    constexpr int n = 10;
    int arr[n];

    for (auto i = arr; i != arr + n; i++) {
        *i = 0;
    }

    for (auto a : arr) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}