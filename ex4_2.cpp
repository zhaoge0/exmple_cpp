#include <iostream>
using namespace std;

void printFactor(int x)
{
	if (x == 1)
	{
		cout << 1;
	}else
	{
		int i;
		for (i = 2; i < x; ++i)
			{
				if (!(x % i))
				{
					cout << i << " * ";
					x /= i;
					i = 2;
				}
			}
			cout << i <<endl;		
	}
	
} 
int main(int argc, char const *argv[])
{
	int x;
	cout << "please enter the number:" ;
	cin >> x;
	cout << x << " = ";
	printFactor(x);
	return 0;
}