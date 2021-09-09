#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> scores(11, 0);
    unsigned score;

    while (cin >> score) {
        if (score <= 100) {
            ++*(scores.begin() + (score/10));
        }
    }

    for (auto a : scores) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}