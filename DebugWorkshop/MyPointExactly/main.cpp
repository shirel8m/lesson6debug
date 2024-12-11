#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	Point p2 = p1; // part 3
	//p2 = p1;

	std::cout << "p1=" << p1 << std::endl; //part 1 fixed here
	std::cout << "p2=" << p2 << std::endl; 

	return 0;
}
