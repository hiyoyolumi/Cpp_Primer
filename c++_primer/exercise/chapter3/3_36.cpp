#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool comparearr(int * const arr1s, int * const arr1e, int * const arr2s, int * const arr2e)
{
    if ((arr1e - arr1s) != (arr2e - arr2s)) {
        return false;
    } else {
        for (int *i = arr1s, *j = arr2s; (i != arr1e) && (j != arr2e); i++, j++) {
            if (*i != *j) {
                return false;
            }
        }
    }

    return true;
} 

int main()
{
    int arr1[] = {0, 1, 2};
    int arr2[] = {0, 2, 4};

    if (comparearr(begin(arr1), end(arr1), begin(arr2), end(arr2))) {
        cout << "arr1 same as arr2" << endl;
    } else {
        cout << "arr1 different from arr2" << endl;
    }

    vector<int> vect1 = {0, 1, 2};
    vector<int> vect2 = {0, 1, 2};

    if (vect1 == vect2) {
        cout << "vector1 same as vector2" << endl;
    } else {
        cout << "vector1 different from vector2" << endl;
    }

    return 0;
}