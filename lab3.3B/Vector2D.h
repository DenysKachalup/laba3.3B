#pragma once
#include "Pair.h"
#include <iostream>
#include <string>

using namespace std;

class Vector2D: public Pair
{
public:

	Vector2D() : Pair() {}
	Vector2D(double x, double y);
	Vector2D(const Vector2D&);

	operator string () const;

	friend	double operator *(Vector2D g, Vector2D f);
	friend Vector2D operator *(Vector2D g, double l);
	double Modul();
	friend bool operator <(Vector2D g, Vector2D f);
	friend bool operator > (Vector2D g, Vector2D f);
	friend bool operator ==(Vector2D g, Vector2D f);

	friend istream& operator >> (istream& in, Vector2D& a);
	friend ostream& operator << (ostream& in, Vector2D& a);

	Vector2D& operator ++();
	Vector2D& operator --();
	Vector2D operator ++(int);
	Vector2D operator --(int);

};


