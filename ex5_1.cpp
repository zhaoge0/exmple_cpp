#include <iostream>
using namespace std;
int is_prime(int x)
{
	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	for (int i = 100; i < 151; i+=2)
	{
		for (int j = 3; j < i/2; j+=2)//better than " for (int j = 2; j < i; ++j)"
		{
			if (is_prime(j) && is_prime(i-j))
			{
				cout << i << " = " << j << " + " << (i-j) << endl;
			}
		}
	}
	return 0;
}