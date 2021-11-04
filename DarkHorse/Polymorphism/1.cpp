#include <iostream>
#include <string>

//多态初探
//虚函数 ---> 实现地址晚绑定

using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speak" << endl;
    }
};

class Cat : public Animal
{
public:
    //重写虚函数
    virtual void speak()
    {
        cout << "Cat speak" << endl;
    }
};

void do_speak(Animal &animal)
{
    animal.speak();
}

int main()
{
    Cat cat;
    do_speak(cat);
    
    Animal animal;
    do_speak(animal);

    return 0;
}