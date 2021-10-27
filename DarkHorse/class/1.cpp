#include <iostream>
#include <string>

using namespace std;

class student
{
   public:
    string name;
    int id;

    void show_stu()
    {
        cout << name << " " << id << endl;
    }

    void get_name(string s)
    {
        name = s;
    }
    void get_id(int i)
    {
        id = i;
    }
};

int main()
{
    student stu;
    stu.get_name("bb");
    stu.get_id(1);
    stu.id = 2;

    stu.show_stu();

    return 0;
}