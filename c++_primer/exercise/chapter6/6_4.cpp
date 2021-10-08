#include <iostream>

using namespace std;

int fact(int n)
{
    int ret = 1;

    while (n) {
        ret *= n;
        n--;    
    }

    return ret;
}

int main()
{
    int n;

    cin >> n;

    cout << fact(n) << endl;

    return 0;
}