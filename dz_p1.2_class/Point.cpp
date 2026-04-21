#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
#include <iostream>

void Point::show()
{
	std::cout
		<< "X: " << x
		<< " | Y: " << y
		<< " | Z: " << z
		<< std::endl;
}

void Point::save(const char path[])
{
	FILE* fout = fopen(path, "w");
	if (!fout) { std::cout << "Writting file error!"; return; }

	fprintf(fout, "%d %d %d", x, y, z);

	fclose(fout);
}

void Point::import(const char path[])
{
	FILE* fin = fopen(path, "r");
	if (!fin) { std::cout << "Opening file error!"; return; }
	
	fscanf(fin, "%d %d %d", &x, &y, &z);

	fclose(fin);
}