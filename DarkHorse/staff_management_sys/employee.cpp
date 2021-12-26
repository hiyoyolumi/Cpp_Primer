#include "head/employee.h"

Employee::Employee(int ID, string name, int dID) {
    this->m_ID = ID;
    this->m_Name = name;
    this->m_DeptID = dID;
}

void Employee::showInfo() {
    cout << "职工编号：" << this->m_ID
         << "\t职工姓名：" << this->m_Name
         << "\t岗位：" << this->getDeptName()
         << "\t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDeptName() {
    return string("员工");
}