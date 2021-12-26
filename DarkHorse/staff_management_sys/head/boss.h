#pragma once

#include "worker.h"

class Boss : public Worker {
public:
    Boss(int ID, string name, int dID);

    virtual void showInfo();

    virtual string getDeptName();
};