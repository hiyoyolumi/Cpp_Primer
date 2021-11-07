#include <iostream>
#include <string>

using namespace std;

//只要类中有一个纯虚函数，那么这个类就是抽象类
class Base
{
public:
    virtual void func() = 0;

};

//子类中必须实例化这个抽象对象，否则这个子类也是抽象类
//抽象类无法实例化对象
//子类必须重写父类中的纯虚函数，否则无法实例化对象
class Son : public Base
{
public:
    virtual void func()
    {
        cout << "func display" << endl;
    }
};

void test()
{
    
    Base * Ptr = new Son;
    Ptr->func();
}

int main()
{
    test();

    return 0;
}