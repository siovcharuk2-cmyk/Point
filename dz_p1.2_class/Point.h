#pragma once
#include <iostream>

class Point
{
private:
	static int objCount;

	int x,
		y,
		z;

public:
	Point(int newX, int newY, int newZ)
		: x{newX},
		y{newY},
		z{newZ}
	{
		objCount++;
	}

	Point() : Point{ 0, 0, 0 } {}

	int getX();
	int getY();
	int getZ();

	void setX(int newX);
	void setY(int newY);
	void setZ(int newZ);

	void show();
	void save(const char path[]);
	void import(const char path[]);

	static int getObjCount();
};