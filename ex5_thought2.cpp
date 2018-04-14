#include <iostream>
using namespace std;

int two(int n)
{
	if (n < 2)
	{
		return 2;
	}
	else
	{
		return two(n-1)*10 + 2;
	}
}

int main(int argc, char const *argv[])
{
	int sum = 0,count;
	cin >> count;
	for (int i = 1; i <= count; ++i)
	{
		sum += two(i);
	}
	cout << sum << endl;
	return 0;
}