#include <iostream>
using namespace std;

double cul(int n)
{
	double result = 0;
	for (int i = 1; i <= n; ++i)
	{
		result += i*i;
	}
	return result/double(n);
}

int	main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << "(1^2 + 2^2 + 3^2 +...+ n^2)/n = " << cul(n) <<endl;
	return 0;
}