#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	float d, sum = 0, rmb1, rumb2;
	while(1)
	{
		cout << "price and acount:";
		cin >> d >> n ;
		if(n == 0) break;
		sum += d*n;
	}
	cout << "----------------------" << endl;
	cout << setiosflags(ios::fixed)<<setprecision(2);
	cout << "total:" << sum << endl;
	cout << "pay:" << sum << endl;
	cout << "----------------------" << endl;
	cout << "cash:";
	cin >>rmb1;
	rumb2 = rmb1 - sum;
	cout << "balance:" << rumb2 <<endl;

	return 0;
}