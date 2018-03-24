#include <iostream>
using namespace std;

float power(float a,int n)
{
	if (!n)
	{
		return 1;
	}
	return a*power(a,n-1);
}
int sumNumber(int n)
{
	int sum;
	for (int i = 1; i < n+1; ++i)
	{
		sum += i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	float a;
	int n;
	cout << "please enter a real number a:";
	cin >> a;
	cout << "please enter a number n:";
	cin >> n;

	cout << "a^n / (1+2+3+...+n) = " <<power(a,n)/sumNumber(n) << endl;
	return 0;
}