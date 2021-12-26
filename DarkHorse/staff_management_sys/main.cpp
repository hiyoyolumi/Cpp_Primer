#include <iostream>
#include "head/workerManager.h"
// #include "head/worker.h"
// #include "head/employee.h"
// #include "head/manage.h"
// #include "head/boss.h"

using namespace std;

int main() {
    // //测试代码
    // Worker *worker = NULL;

    // worker = new Employee(1, "冰冰", 1);
    // worker->showInfo();
    // delete worker;

    // worker = new Manage(2, "经理冰冰", 2);
    // worker->showInfo();
    // delete worker;

    // worker = new Boss(3, "王冰冰", 3);
    // worker->showInfo();
    // delete worker;

    //实例化管理者对象
    WorkerManager wm;
    int choice = 0;
    while (true) {
        wm.Show_Menu();
        cout << "请输入你的选择" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            wm.exitSystem();
            break;
        case 1:

            break;
        default:
            system("clear");
            break;
        }
    }

    return 0;
}