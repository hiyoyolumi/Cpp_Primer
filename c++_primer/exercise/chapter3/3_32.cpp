#include <iostream>
#include <vector>

using namespace std;

int main()
{
    constexpr int n = 10;
    vector<int> arr;
    for (int i=0; i<n; i++) {
        arr.push_back(i);
    }
    
    vector<int> arr2;
    for (auto a : arr) {
        arr2.push_back(a);
    }
    // for (int i=0; i<n; i++) {
    //     arr2.push_back(arr[i]);
    // }

    for (auto a : arr2) {
        cout << a << " ";
    }
    cout << endl;

    return 0;

    // constexpr int n = 10;
    // int arr[n];
    // for (size_t i=0; i<n; i++) {
    //     arr[i] = i;
    // }
    
    // int arr2[n];
    // for (size_t i=0; i<n; i++) {
    //     arr2[i] = arr[i];
    // }

    // for (auto a : arr2) {
    //     cout << a << " ";
    // }
    // cout << endl;

    // return 0;
}