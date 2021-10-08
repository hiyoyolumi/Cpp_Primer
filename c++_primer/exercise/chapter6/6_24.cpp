#include <iostream>

using namespace std;

void print(const int (&ia)[5])
{
	for (size_t i = 0; i != 5; ++i)
		cout << ia[i] << endl;
}

int main()
{
    int ia[5] = {1,2,3,4,5};

    print(ia);

    return 0;
}