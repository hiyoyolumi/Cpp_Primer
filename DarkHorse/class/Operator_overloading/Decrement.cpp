#include <iostream>

using namespace std;

class build
{
    friend ostream& operator<<(ostream& cout, build p);

public:
    //构造函数
    build(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
    build() //默认构造函数
    {
        m_A = 0;
        m_B = 0;
    }

    //前置
    build& operator--()
    {
        m_A--;
        m_B--;
        return *this;
    }
    //后置
    build operator--(int)
    {
        build temp(*this);
        m_A--;
        m_B--;
        return temp;
    }

private:
    int m_A;
    int m_B;

};

//重载<<运算符
ostream& operator<<(ostream& cout, build p)
{
    cout << p.m_A << " " << p.m_B;
    return cout;
}

void test01()
{
    build p(10, 20);
    cout << --(--p) << endl;
}

void test02()
{
    build p(10, 20);
    cout << p-- << endl;
    cout << p << endl;
}

int main()
{
    //test01();

    test02();

    return 0;
}