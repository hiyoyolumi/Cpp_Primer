#include "head/manage.h"

Manage::Manage(int ID, string name, int dID) {
    this->m_ID = ID;
    this->m_Name = name;
    this->m_DeptID = dID;
}

void Manage::showInfo() {
    cout << "职工编号：" << this->m_ID
         << "\t职工姓名：" << this->m_Name
         << "\t岗位：" << this->getDeptName()
         << "\t岗位职责：完成老板交给的任务" << endl;
}

string Manage::getDeptName() {
    return string("经理");
}