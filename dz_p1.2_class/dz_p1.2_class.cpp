#include <iostream>
#include "Point.h"

int main()
{
	const char path[] = "Saved.txt";
	Point point{ 1, 2, 3 };

	point.show();

	point.setX(8);
	point.setY(3);
	point.setZ(-2);
	std::cout << "Changed" << std::endl;
	point.show();

	point.import(path);
	std::cout << "------------" << '\n';
	std::cout << "Imported" << std::endl;
	point.show();

	point.save(path);
	std::cout << "Saved" << std::endl;

	std::cout << "Number of created Points: " << Point::getObjCount() << std::endl;
}