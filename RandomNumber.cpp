
#include "RandomNumber.h"
#include <cstdlib>
#include <cmath>

using namespace std;


// Draw random numbers for Z

double DrawNumber() {

	double x;
	double y;
	double s;

	do
	{
		x = 2.0*rand() / (double)(RAND_MAX)-1;
		y = 2.0*rand() / (double)(RAND_MAX)-1;
		s = x*x + y*y;
	} while (s >= 1.0);

	return x*sqrt(-2 * log(s) / s);

}