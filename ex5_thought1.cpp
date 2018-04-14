#include <iostream>
using namespace std;
int fib(int n)
{
	if (n < 1)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}else
	{
		return fib(n-1) + fib(n-2);
	}
}


int main(int argc, char const *argv[])
{
	int i,t;
	cin >> t;
	for (i = 0; t >= fib(i); ++i);
	cout << fib(i) << endl;
	return 0;
}