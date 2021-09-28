#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> veca {0,1,1,2};
    vector<int> vecb {0,1,1,2,3,5,8};

    int flag = 1;

    for (int i = 0; i < veca.size(); i++) {
        if (veca[i] != vecb[i]) {
            flag = 0;
        }
    }

    if (flag == 1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}