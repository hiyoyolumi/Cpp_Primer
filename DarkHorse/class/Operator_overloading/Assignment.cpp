#include <iostream>

using namespace std;

class build
{
    friend ostream& operator<<(ostream& cout, build &p);

public:
    build()
    {
        //这里如果不为指针分配空间的话
        //会出现munmap_chunk(): invalid pointer
        m_Ptr = new int;
    }
    build(int a, int b, int c)
    {
        m_A = a;
        m_B = b;
        m_Ptr = new int(c);
    }
    ~build()
    {
        if (m_Ptr != NULL)
        {
            delete m_Ptr;
            m_Ptr = NULL;   //内存重复释放
        }
    }

    //重载 赋值符号
    build& operator=(build &p)
    {
        //先清干净
        if (m_Ptr != NULL)
        {
            delete m_Ptr;
            m_Ptr = NULL;
        }
        //浅拷贝
        m_A = p.m_A;
        m_B = p.m_B;
        // m_Ptr = p.m_Ptr;

        //深拷贝
        m_Ptr = new int(*p.m_Ptr);
        
        //返回对象本身
        return *this;
    }


private:
    int m_A;
    int m_B;
    int *m_Ptr;
};

//这里使用 build 引用以减少拷贝造成的开销
ostream& operator<<(ostream& cout, build &p)
{
    cout << p.m_A << " " << p.m_B << " " << *p.m_Ptr;
    return cout;
}

void test01()
{
    build p(10, 20, 30);
    // build a(11, 22, 33);
    build a;
    a = p;
    cout << p << endl;
    cout << a << endl;
}

int main()
{
    test01();

    return 0;
}