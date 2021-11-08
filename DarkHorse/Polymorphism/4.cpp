#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    virtual void Boil() = 0;
    virtual void Put() = 0;
    virtual void Accessories() = 0;
    virtual void Pour() = 0;

    void dowork()
    {
        Boil();
        Put();
        Accessories();
        Pour();
    }
};

class Tea : public Base
{
public:
    virtual void Boil()
    {
        cout << "Boil Water" << endl;
    }
    virtual void Put()
    {
        cout << "Put" << endl;
    }
    virtual void Accessories()
    {
        cout << "Lemon" << endl;
    }
    virtual void Pour()
    {
        cout << "Cup" << endl;
    }
};

class Coffee : public Base
{
public:
    virtual void Boil()
    {
        cout << "High Boil Water" << endl;
    }
    virtual void Put()
    {
        cout << "Put" << endl;
    }
    virtual void Accessories()
    {
        cout << "milk and sugar" << endl;
    }
    virtual void Pour()
    {
        cout << "Cup" << endl;
    }
};

void do_work(Base * Ptr)
{
    Ptr->dowork();
    delete Ptr;
}

void test()
{
    do_work(new Tea);
    cout << "---------" << endl;
    //两种实现方法
    Coffee cof;
    cof.dowork();
}

int main()
{
    test();
    return 0;
}