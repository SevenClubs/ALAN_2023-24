#include <iostream>
#include <math.h>

int main()
{
	int d0 = 2, d1 = 6;
	double b = (d1 + 1) * pow(10, 20);
	double c = -b;
	
	for (int i = 0; i < 7; ++i) {
		double a = (d0 + 1) * pow(10, i);
		double r1 = (a + b) + c;
		double r2 = a + (b + c);
		std::cout << "Risultati test " << i << ":\n" << 
			"r1 = " << r1 << 
			"\nr2 = " << r2 << "\n\n";
	}
}
