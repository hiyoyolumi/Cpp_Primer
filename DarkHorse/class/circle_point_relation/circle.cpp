#include "circle.h"

void Circle::set_R(int r)
{
    m_R = r;
}

int Circle::get_R()
{
    return m_R;
}

void Circle::set_center(Point center)
{
    m_center = center;
}

Point Circle::get_center()
{
    return m_center;
}