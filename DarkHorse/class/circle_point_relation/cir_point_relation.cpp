#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;

void is_in_circle(Circle &c, Point &p)
{
    int distance = 
    (c.get_center().get_X() - p.get_X()) * (c.get_center().get_X() - p.get_X()) + 
    (c.get_center().get_Y() - p.get_Y()) * (c.get_center().get_Y() - p.get_Y());

    int r_distance = c.get_R() * c.get_R();
    
    if (r_distance == distance)
    {
        cout << "点在圆上" << endl;
    }
    else if (r_distance < distance)
    {
        cout << "点在圆外" << endl;
    }
    else 
    {
        cout << "点在圆内" << endl;
    }
}

int main()
{
    //创建圆
    Circle c;
    c.set_R(10);

    Point center;
    center.set_X(10);
    center.set_Y(0);
    c.set_center(center);

    //创建点
    Point p;
    p.set_X(10);
    p.set_Y(10);

    is_in_circle(c, p);

    return 0;
}