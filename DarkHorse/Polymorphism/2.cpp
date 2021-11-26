#include <iostream>
#include <string>

using namespace std;

class Calculator
{
public:
    virtual int getresult()
    {
        return 0;
    }

    int m_numA;
    int m_numB;
};

class addCalculator : public Calculator
{
public:
    int getresult()
    {
        return m_numA + m_numB;
    }
};

class subCalculator : public Calculator
{
public:
    int getresult()
    {
        return m_numA - m_numB;
    }
};

class mulCalculator : public Calculator
{
public:
    int getresult()
    {
        return m_numA * m_numB;
    }
};

class divCalculator : public Calculator
{
public:
    int getresult()
    {
        return m_numA / m_numB;
    }
};


//多态使用条件
//父类指针或者引用 指向 子类对象
void test()
{
    Calculator * abc = new addCalculator;
    // addCalculator a;
    // Calculator &abc = a;
    abc->m_numA = 10;
    abc->m_numB = 10;
    cout << "m_numA + m_numB = " << abc->getresult() << endl;
    delete abc;

    abc = new subCalculator;
    abc->m_numA = 10;
    abc->m_numB = 10;
    cout << "m_numA - m_numB = " << abc->getresult() << endl;
    delete abc;

    abc = new mulCalculator;
    abc->m_numA = 10;
    abc->m_numB = 10;
    cout << "m_numA * m_numB = " << abc->getresult() << endl;
    delete abc;

    abc = new divCalculator;
    abc->m_numA = 10;
    abc->m_numB = 10;
    cout << "m_numA - m_numB = " << abc->getresult() << endl;
    delete abc;

    return;
}

int main()
{
    test();

    return 0;
}