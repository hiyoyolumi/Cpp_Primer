#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cin >> a >> b;

    swap(a, b);

    cout << a << " || " << b << endl;

    swap_pointer(&a, &b);

    cout << a << " || " << b << endl;

    return 0;
}