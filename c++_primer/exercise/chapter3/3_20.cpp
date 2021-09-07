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
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

    for (int i=0; i<nums.size() - 1; i++) {
        cout << nums[i] + nums[i+1] << " ";
    }
    cout << endl;

    cout << "-----------------------" << endl;

    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] + nums[nums.size() - 1 - i] << " ";
    }
    cout << endl;

    return 0;
}