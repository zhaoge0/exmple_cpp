#include <iostream>
#include <cmath>
#define E 0.000001
using namespace std;

double f(double x)
{
	double a = x,sum = 0;
	for (int i = 2; fabs(a) > E; ++i)
	{
		sum += a;
		a *= -x*x*(2*i-3)/(2*i-1)/(i-1);
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	
	cout << f(0.5) <<endl;
	return 0;
}