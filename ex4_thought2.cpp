#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int i;
	double sum = 0, t = 0;
	for (i = 1; fabs(t-8) >= fabs(sum-8); ++i)
	{
		t = sum;
		sum += 1.0/i;
	}
	i -= 2;
	cout << i <<endl; 
	return 0;
}