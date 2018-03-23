#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 1; i < 5; ++i)
	{
		for (int j = 1; j < 5 ; ++j)
		{
			for (int k = 1; k < 5; ++k)
			{
				if (i != j && i != k && k != j)
				{
					cout <<i<<j<<k <<endl;
				}
				
			}
		}
	}
	return 0;
}