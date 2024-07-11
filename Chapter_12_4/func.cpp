#include <cmath>
#include "Point2d.h"

double distanceFrom(const Point2d &first, const Point2d &second)
{
    return (std::sqrt((first.m_x-second.m_x)*(first.m_x-second.m_x) + 
                          (first.m_y-second.m_y)*(first.m_y-second.m_y)));
}