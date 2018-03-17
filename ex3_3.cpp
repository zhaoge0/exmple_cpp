#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 1; 
	for (char asc = 32; asc < 127; ++asc,++a)
	{
		cout << "\""<< asc << "\"" <<"=" << int(asc) << "\t";
		if (a % 7 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}
