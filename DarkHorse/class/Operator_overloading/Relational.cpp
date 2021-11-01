#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }

    bool operator==(Person &p)
    {
        if (m_Name == p.m_Name && m_Age == p.m_Age)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    bool operator!=(Person &p)
    {
        if (m_Name == p.m_Name && m_Age == p.m_Age)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }


    string m_Name;
    int m_Age;
};

void test01()
{
    Person a("bingbing", 18);
    Person b("bingbing", 18);

    if (a == b)
    {
        cout << "a == b" << endl;
    }
    else 
    {
        cout << "a != b" << endl;
    }

    if (a != b)
    {
        cout << "a != b" << endl;
    }
    else 
    {
        cout << "a == b" << endl;
    }
}

int main()
{
    test01();

    return 0;
}