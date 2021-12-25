#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void test01() {
    ifstream ifs;
    
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open()) {
        cout << "file open fail" << endl;
        return;
    }

    // char buf[1024] = {0};
    // while (ifs >> buf) {
    //     cout << buf << endl;
    // }

    // while (ifs.getline(buf, sizeof(buf))) {
    //     cout << buf << endl;
    // }
    
    string buff;
    while (getline(ifs, buff)) {
        cout << buff << endl;
    }

    // char c;
    // while ((c = ifs.get()) != EOF) {
    //     cout << c;
    // }

    ifs.close();
}

int main() {
    test01();

    return 0;
}