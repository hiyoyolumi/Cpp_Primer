#pragma once

#include <iostream>
#include "worker.h"

using namespace std;

class Employee : public Worker {
public:
    Employee(int ID, string name, int dID);

    virtual void showInfo();

    virtual string getDeptName();
};