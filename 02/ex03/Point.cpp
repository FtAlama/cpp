#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point() {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point &clone) : x(clone.get_x()), y(clone.get_y()) {}

const Fixed &Point::get_x() const { return (this->x); }

const Fixed &Point::get_y() const { return (this->y); }

Point	&Point::operator=(const Point &clone)
{
	(void) clone;
	std::cout << "can't asssing the operator= cause of const value\n";
	return (*this);
}

Point::~Point() {}

// static int sign(const Point &p1, const Point &p2, const Point &p3)
// {
// 	return ((int)(p1.get_x().getRawBits() - p3.get_x().getRawBits())
// 					* (p2.get_y().getRawBits() - p3.get_y().getRawBits())
// 					- (p2.get_x().getRawBits() - p3.get_x().getRawBits())
// 					* (p1.get_y().getRawBits() - p3.get_y().getRawBits()));
// }
//
// bool	bsp(const Point a, const Point b, const Point c, const Point point)
// {
// 	bool	has_neg, has_pos;
//
// 	Fixed d1(sign(point, a, b));
// 	Fixed d2(sign(point, b, c));
// 	Fixed d3(sign(point, c, a));
//
// 	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
// 	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
//
// 	return (!(has_neg && has_pos));
// }

static long long sign_raw(Point const &p1, Point const &p2, Point const &p3)
{
	long long dx1 = p1.get_x().getRawBits() - p3.get_x().getRawBits();
	long long dy1 = p1.get_y().getRawBits() - p3.get_y().getRawBits();
	long long dx2 = p2.get_x().getRawBits() - p3.get_x().getRawBits();
	long long dy2 = p2.get_y().getRawBits() - p3.get_y().getRawBits();

	return (dx1 * dy2 - dx2 * dy1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool has_neg;
	bool has_pos;
	long long d1 = sign_raw(point, a, b);
	long long d2 = sign_raw(point, b, c);
	long long d3 = sign_raw(point, c, a);
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return (!(has_neg && has_pos) && d1 != 0 && d2 != 0 && d3 != 0);
}
// float sign (fPoint p1, fPoint p2, fPoint p3)
// {
//     return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
// }
//
// bool PointInTriangle (fPoint pt, fPoint v1, fPoint v2, fPoint v3)
// {
//     float d1, d2, d3;
//     bool has_neg, has_pos;
//
//     d1 = sign(pt, v1, v2);
//     d2 = sign(pt, v2, v3);
//     d3 = sign(pt, v3, v1);
//
//     has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
//     has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
//
//     return !(has_neg && has_pos);
// }
