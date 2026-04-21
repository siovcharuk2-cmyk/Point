#include <iostream>
#include "Point.h"

int main()
{
	const char path[] = "Saved.txt";
	Point point{ 1, 2, 3 };

	point.show();

	point.import(path);
	std::cout << "------------" << '\n';
	std::cout << "Imported" << std::endl;

	std::cout
		<< "X: " << point.getX() << '\n'
		<< "Y: " << point.getY() << '\n'
		<< "Z: " << point.getZ() << '\n'
		<< "------------" << '\n';

	point.setX(12);
	point.setY(-3);
	point.setZ(0);
	std::cout << "Changed" << std::endl;

	point.show();
	point.save(path);
	std::cout << "Saved" << std::endl;
}