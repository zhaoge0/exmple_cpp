#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,d;
	for (int i = 31; i < 100; ++i)
	{
		a = i*i /1000;
		b = i*i /100 %10;
		c = i*i /10 %10;
		d = i*i %10;
		if (a == b && c == d)
		{
			cout << i*i <<endl;
		}
	}
	return 0;
}