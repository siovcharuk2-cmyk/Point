#include <iostream>
#include "Point.h"

int main()
{
	const char path[] = "Saved.txt";
	Point point;

	point.import(path);

	std::cout
		<< "------------" << '\n'
		<< "X: " << point.getX() << '\n'
		<< "Y: " << point.getY() << '\n'
		<< "Z: " << point.getZ() << '\n'
		<< "------------" << '\n';

	point.setX(12);
	point.setY(-3);
	point.setZ(0);

	point.show();
	point.save(path);
}