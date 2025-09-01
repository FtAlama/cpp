#ifndef __POINT__

# define __POINT__

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(float x, float y);
	Point(const Point &);
	~Point();
	Point				&operator=(const Point &);
	const Fixed	&get_x() const;
	const Fixed	&get_y() const;
private:
	const Fixed	x;
	const Fixed y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
