#include "head/workerManager.h"

WorkerManager::WorkerManager() {

}

WorkerManager::~WorkerManager() {
    
}

void WorkerManager::Show_Menu() {
    cout << "*************" << endl;
    cout << "0.退出管理系统" << endl;
    cout << "1.增加职工信息" << endl;
    cout << "2.显示职工信息" << endl;
    cout << "3.删除离职员工" << endl;
    cout << "4.修改员工信息" << endl;
    cout << "5.查找职工信息" << endl;
    cout << "6.按照编号排序" << endl;
    cout << "7.清空所有文档" << endl;
    cout << "*************" << endl;
}

void WorkerManager::exitSystem() {
    cout << "欢迎下次使用" << endl;
    exit(0);
}