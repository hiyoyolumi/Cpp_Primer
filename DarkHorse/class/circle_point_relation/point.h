#pragma once

#include <iostream>

using namespace std;

class Point
{
public:
    void set_X(int x);
    int get_X();
    void set_Y(int y);
    int get_Y();

private:
    int m_X;
    int m_Y;
};