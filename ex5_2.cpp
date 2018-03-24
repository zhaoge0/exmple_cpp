#include <iostream>
using namespace std;
float f(float a,float q,int n)
{
	float sum = a;
	for (int i = 1; i <= n; ++i)
	{
		a *= q;
		sum += a;
	}
	return sum;
}
int	main(int argc, char const *argv[])
{
	float a,q;
	int n;
	a = 3;
	q = 0.5;
	cout << "enter the n:";
	cin >> n;
	cout << "the sumary of series is :" << f(a,q,n) << endl;
	cout << "a/(1-q) = " << a/(1-q) <<endl;
	return 0;
}