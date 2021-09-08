#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums(10, 3);

    // for (auto &it : nums) {
    //     it *= 2;
    //     cout << it << " ";
    // }
    // cout << endl;

    for (auto it = nums.begin(); it != nums.end(); it++) {
        (*it) *= 2;
        cout << *it << " (" << it - nums.begin() << ")  ";
    }
    cout << endl;

    // for (auto it = nums.begin(); it != nums.end(); it++) {
    //     (*it) *= 2;
    // }

    // for (auto num : nums) {
    //     cout << num << " ";
    // }
    // cout << endl;

    return 0;
}