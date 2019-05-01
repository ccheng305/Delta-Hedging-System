//Approximation of a Normal CDF
#include "NormalDistribution.h"
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;


double get_approx(double x) {
	const double pi = atan(1) * 4;          //Pie defined
	const double a1 = 0.319381530;
	const double a2 = -0.356563782;
	const double a3 = 1.781477937;
	const double a4 = -1.821255978;
	const double a5 = 1.330274429;
	if (x >= 0) {                           //Normal CDF when x > 0
		double z = 1.0 / (1.0 + 0.2316419*x);
		return 1.0 - (1.0 / sqrt(2 * pi))*exp(-(x*x) / 2.0)*(z*a1 + a2*z*z + a3*z*z*z + a4*z*z*z*z + a5*z*z*z*z*z);
	}
	else {
		double z = 1.0 / (1.0 + 0.2316419*(-x));    //Normal CDF when x < 0
		return 1.0 - (1.0 - (1.0 / sqrt(2 * pi))*exp(-((-x)*(-x)) / 2.0)*(z*a1 + a2*z*z + a3*z*z*z + a4*z*z*z*z + a5*z*z*z*z*z));
	}
}
