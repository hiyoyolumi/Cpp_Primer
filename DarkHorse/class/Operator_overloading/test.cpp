#include <iostream>
#include <string>

using namespace std;

class building
{
    friend ostream& operator<<(ostream &cout, building p);

public:
    //无参构造函数
    building()
    {
        m_A = 0;
        m_B = 0;
    }
    //有参构造函数
    building(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
    //析构函数
    // ~building()
    // {
    //     cout << "析构函数" << endl;
    // }
    //成员函数
    void out()
    {
        cout << this->m_A << " " << this->m_B << endl;
    }
    //重载前置自增运算符
    building& operator++()
    {
        m_A++;
        m_B++;
        return *this;
    }
    //重载后置自增运算符
    building operator++(int)
    {
        building temp;
        temp.m_A = m_A;
        temp.m_B = m_B;
        m_A++;
        m_B++;
        return temp;
    }

private:
    int m_A;
    int m_B;

};

//重载左移运算符
ostream& operator<<(ostream &cout, building p)
{
    cout << p.m_A << " " << p.m_B;
    return cout;
}

int main()
{
    //创建对象，调用构造函数
    building p(10, 20);

    //cout << ++(++p) << endl;
    //cout << p << endl;
    cout << p++ << endl;
    cout << p << endl;
    //p.out();

    return 0;
}