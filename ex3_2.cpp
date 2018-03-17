#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, q, n, sum;
	a = 1;
	q = 2;
	n = sum = 0;
	do{
		sum += a;
		++n;
		a *= q;

	}while(sum < 100);
	--n;
	cout << n <<endl;
	return 0;
}
