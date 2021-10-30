#include <iostream>

using namespace std;

class build
{
public:
    build(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

    void print()
    {
        cout << m_A << " " << m_B << endl;
    }

private:
    int m_A;
    int m_B;

};

void test01()
{
    build a(10,20);
    a.print();

    build b(a);
    b.print();
}

int main()
{
    test01();

    return 0;
}