#pragma once
#include <iostream>

class Point
{
private:
	int x,
		y,
		z;

public:
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Point(int newX, int newY, int newZ)
	{
		x = newX;
		y = newY;
		z = newZ;
	}

	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void setX(int newX) { x = newX; }
	void setY(int newY) { y = newY; }
	void setZ(int newZ) { z = newZ; }

	void show();

	void save(const char path[]);
	void import(const char path[]);

	~Point()
	{
		std::cout << "-Destructed-" << std::endl;
	}
};