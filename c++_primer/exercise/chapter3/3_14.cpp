#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> nums;
    int n;

    while (cin >> n) {
        nums.push_back(n);
    }

    return 0;
}