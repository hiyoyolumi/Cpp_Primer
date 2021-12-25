#include <iostream>
#include "workerManager.h"

using namespace std;

int main() {
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
        
        default:
            system("clear");
            break;
        }
    }

    return 0;
}