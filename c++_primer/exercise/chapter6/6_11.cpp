#include <iostream>

using namespace std;

void reset(int &);

int main()
{
    int n;

    cin >> n;

    reset(n);

    cout << n << endl;

    return 0;
}

void reset(int &n)
{
    n = 0;
}