#include <iostream>
#include <string>

using namespace std;

class Calculator
{
public:
    virtual int Calcula()
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

void test()
{
    
}

int main()
{

}