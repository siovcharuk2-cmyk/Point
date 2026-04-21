#pragma once

class Point
{
private:
	int x,
		y,
		z;

public:
	int getX();
	int getY();
	int getZ();

	void setX(int newX);
	void setY(int newY);
	void setZ(int newZ);

	void show();

	void save(const char path[]);
	void import(const char path[]);
};

