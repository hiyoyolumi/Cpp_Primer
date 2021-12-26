#include <iostream>
#include <string>

using namespace std;

class Calculator {
public:
    int get_result(string oper) {
        if (oper == "+") {
            return m_Num1 + m_Num2;
        }
    }

    int m_Num1;
    int m_Num2;
};

void test01() {
    Calculator c;

    c.m_Num1 = 10;
    c.m_Num2 = 20;

    cout << c.get_result("+") << endl;
}

int main() {
    test01();

    return 0;
}