#include "Pair.h"

Pair::Pair()
	: x(0), y(0)
{}

Pair::Pair(double a, double b)
{
	setX(a), setY(b);
}

Pair::Pair(const Pair& t)
{
	x = t.x;
	y = t.y;
}
bool operator ==(const Pair& t1, const Pair& t2)
{
	return t1.getX() == t2.getX() && t1.getY() == t2.getY();
}
bool operator >(const Pair& t1, const Pair& t2)
{
	return t1.getX() > t2.getX() || t1.getX() == t2.getX() && t1.getY() > t2.getY();
}
bool operator <(const Pair& t1, const Pair& t2)
{
	return t1.getX() < t2.getX() || t1.getX() == t2.getX() && t1.getY() < t2.getY();
}

bool operator >=(const Pair& t1, const Pair& t2)
{
	return !(t1 < t2);
}
bool operator <=(const Pair& t1, const Pair& t2)
{
	return !(t1 > t2);
}
bool operator !=(const Pair& t1, const Pair& t2)
{
	return !(t1 == t2);
}
