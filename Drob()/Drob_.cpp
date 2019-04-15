#include "Drob_.h"


drob::drob(int x, int y)
{
	this->setX(x);
	this->setY(y);
}

drob::drob(const drob & obj)
{
	this->x = obj.x;
	this->y = obj.y;
}

drob drob::operator+=(const drob & b)
{
	this->x = this->x*b.y + this->y*b.x;
	this->y *= b.y;
	return *this;
}

drob drob::operator-=(const drob & b)
{
	this->x = this->x*b.y - this->y*b.x;
	this->y *= b.y;
	return *this;
}
drob drob::operator*=(const drob & b)
{
	this->x = this->x*b.x;
	this->y *= b.y;
	return *this;
}
drob drob::operator/=(const drob & b)
{
	this->x = this->x*b.y;
	this->y *= b.x;
	return *this;
}

void drob::setX(int x)
{
	this->x = x;
}

void drob::setY(int y)
{
	if (y != 0)
	{
		this->y = y;
	}
	else
	{
		this->y = 1;
	}
}
double drob::getDrob()
{
	return 0.0;
}
drob & drob::operator++()
{
	this->x+= this->y;
	return *this;
}
ostream & operator<<(ostream & os, const drob & c)
{
	os<<c.getX()<<"/"<<c.getY();
	return os;
}
istream & operator<<(istream & is, drob & c)
{
	cout << "Enter x";
	int x;
	cin >> x;
	c.setX(x);
	cout << "Enter y";
	cin >> x;
	c.setY(x);
	return is;
}
drob operator+(const drob & a, const drob & b)
{
	drob tmp = a;
	tmp += b;
	return tmp;
}

