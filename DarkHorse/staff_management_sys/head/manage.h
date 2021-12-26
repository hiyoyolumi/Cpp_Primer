#pragma once

#include "worker.h"

class Manage : public Worker {
public:
    Manage(int ID, string name, int dID);

    virtual void showInfo();

    virtual string getDeptName();
};