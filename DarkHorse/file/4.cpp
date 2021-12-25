#include <iostream>
#include <fstream>

using namespace std;

class Person {
public:
    char m_name[64];
    int m_Age;
};

void test01() {
    ifstream ifs;

    ifs.open("person.txt", ios::in | ios::binary);
    if(!ifs.is_open()) {
        cout << "file open fail" << endl;
        return;
    }

    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << "name:" << p.m_name << " age:" << p.m_Age << endl;

    ifs.close();
}

int main() {
    test01();

    return 0;
}