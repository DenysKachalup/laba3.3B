#include "Vector2D.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

Vector2D::Vector2D(double a, double b)
	:Pair(a,b) {}

Vector2D::Vector2D(const Vector2D& t)
	:Pair(t) {}

Vector2D::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << ")" << endl;
	return sout.str();
}

double operator * (Vector2D g, Vector2D f)
{
	double t = g.getX() * f.getX() + g.getY() * f.getY();
	return t;
}

Vector2D operator * (Vector2D g, double l)
{
	Vector2D tmp(0.0, 0.0);
	double a = g.getX() * l;
	tmp.setX(a);
	a = g.getX() * l;
	tmp.setY(a);
	return tmp;
}

double Vector2D::Modul()
{
	double mod = sqrt((getX() * getX()) + (getY() * getY()));
	return mod;

}

bool operator > (Vector2D a, Vector2D b)
{
	return (a.Modul() > b.Modul());
}

bool operator < (Vector2D a, Vector2D b)
{
	return (a.Modul() < b.Modul());
}

bool operator ==(Vector2D a, Vector2D b)
{
	return (a.Modul() == b.Modul());
}

Vector2D& Vector2D::operator ++()
{
	setX(getX() + 1);
	return *this;
}

Vector2D& Vector2D::operator --()
{
	setY(getY() - 1);
	return *this;
}

Vector2D Vector2D::operator ++(int)
{
	Vector2D tmp = *this;
	setX(getX() + 1);
	return tmp;
}

Vector2D Vector2D::operator --(int)
{
	Vector2D tmp = *this;
	setY(getY() - 1);
	return tmp;
}

istream& operator >> (istream& in, Vector2D& a)
{
	double x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	a.setX(x), a.setY(y);

	return in;
}

ostream& operator << (ostream& out, Vector2D& a)
{
	out << string(a) << endl;
	return out;
}

