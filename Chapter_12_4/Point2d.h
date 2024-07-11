#pragma once

class Point2d
{
private:
    double m_x;
    double m_y;
public:
    Point2d(double x=0.0, double y=0.0);

    void print() const;

    double distanceTo(Point2d& object);

    friend double distanceFrom(const Point2d &first, const Point2d &second);
};