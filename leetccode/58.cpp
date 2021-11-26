#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int lenthOfLastWord(string s) {
        int index = s.size() - 1;
        while (s[index] == ' ') {
            index--;
        }
        int len = 0;
        while (s[index] != ' ' && index >= 0) {
            len++;
            index--;
        }
        return len;
    }
};

void test01() {
    string s = "a";
    cout << Solution().lenthOfLastWord(s) << endl;
}

void test02() {
    vector<int> vec;
    for (int i=0; i <= 5; i++) {
        vec.push_back(i);
    }  
    for (auto a : vec) {
        cout << a << endl;
    }
    cout << "------------" << endl;
    for (auto it = vec.begin(); it != vec.end(); it++) {
        // cout << it << endl;
        cout << *it << endl;
    }
}

int main() {
    test02();

    return 0;
}