#include <iostream>
#include <cmath>
#include "Point2d.h"

Point2d::Point2d(double x, double y) : m_x{x}, m_y{y}
    { }

void Point2d::print() const
{
    std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
}

double Point2d::distanceTo(Point2d& object)
{
    return (std::sqrt((m_x-object.m_x)*(m_x-object.m_x) + 
                      (m_y-object.m_y)*(m_y-object.m_y)));
}
