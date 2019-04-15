#pragma once 
#include<iostream> 
using namespace std;
class drob
{
	int x, y;
public:
	drob(int x = 0, int y = 0);
	drob(const drob & obj);
	drob operator+=(const drob&b);
	drob operator*=(const drob&b);
	drob operator-=(const drob&b);
	drob operator/=(const drob&b);
	void setX(int x);
	void setY(int y);
	int getX()const { return this->x; }
	int getY()const { return this->y; }
	double getDrob();
	void print() { cout << x << "/" << y << endl; }
	drob& operator++();
};
ostream& operator<<(ostream&os, const drob&c);
istream& operator<<(istream&is, drob&c);
drob operator+(const drob& a, const drob& b);
drob operator-(const drob& a, const drob& b);

