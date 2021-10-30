#include <iostream>

using namespace std;

class build
{

    friend ostream& operator<<(ostream& cout, build &p);

public:
    build(int a)
    {
        m_Ptr = new int(a);
    }
    ~build()
    {
        if (m_Ptr != NULL)
        {
            delete m_Ptr;
            m_Ptr = NULL;
        }
    }

    build& operator=(build &a)
    {
        if (m_Ptr != NULL)
        {
            delete m_Ptr;
            m_Ptr = NULL;
        }
        
        m_Ptr = new int(*a.m_Ptr);

        return *this;
    }

    int *m_Ptr;
};

//使用这个重载函数，就会出错
//重载函数中使用build的引用————正确
ostream& operator<<(ostream& cout, build &p)
{
    cout << *p.m_Ptr;
    return cout;
}

void test01()
{
    build p(10);
    build a(20);
    a = p;

    //错误
    cout << p << endl;
    cout << a << endl;
    
    //正确
    // cout << *p.m_Ptr << endl;
    // cout << *a.m_Ptr << endl;
}

int main()
{
    test01();

    return 0;
}