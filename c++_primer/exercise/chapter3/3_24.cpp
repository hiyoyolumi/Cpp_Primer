#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

    for (auto a = nums.begin(); a < nums.end() - 1; a++) {
        cout << *a + *(a+1) << " ";
    }
    cout << endl;

    cout << "--------------" << endl;

    auto a = nums.begin();
    auto b = nums.end() - 1;
    while (a < b) {
        cout << *a + *b << " ";
        a++;
        b--;
    }
    cout << endl;

    return 0;
}