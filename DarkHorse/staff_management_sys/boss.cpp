#include "head/boss.h"

Boss::Boss(int ID, string name, int dID) {
    this->m_ID = ID;
    this->m_Name = name;
    this->m_DeptID = dID;
}

void Boss::showInfo() {
    cout << "职工编号：" << this->m_ID
         << "\t职工姓名：" << this->m_Name
         << "\t岗位：" << this->getDeptName()
         << "\t岗位职责：当老板" << endl;
}

string Boss::getDeptName() {
    return string("老板");
}