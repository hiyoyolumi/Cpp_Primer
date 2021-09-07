#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

#define ivec ivec1

int main()
{
    vector<int> ivec1(10, 42);
    vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
    vector<int> ivec3;
    for (int i = 0; i < 10; ++i)
	    ivec3.push_back(42);
    for (auto a : ivec) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}