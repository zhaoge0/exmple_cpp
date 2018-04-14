#include <iostream>
using namespace std;
int is_prime(int num)
{
	for (int i = 2; i < num; ++i)
	{	
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int flag = 0,t;
	for (int i = 1001; i < 2001; i+=2)
	{
		if (is_prime(i))
		{
			if (flag == 0)
			{
				cout << "the minimum prime number is" << i << ".\n";
				flag = 1;
			}
			t = i;
		}
	}
	cout << "the maximum prime number is" << t << ".\n";
	return 0;
}