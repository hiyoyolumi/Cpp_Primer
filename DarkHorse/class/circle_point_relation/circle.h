#pragma once

#include <iostream>
#include "point.h"

using namespace std;

class Circle
{
public:
    void set_R(int r);
    int get_R();
    void set_center(Point center);
    Point get_center();

private:
    int m_R;
    Point m_center;
};