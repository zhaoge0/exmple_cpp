#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num, max, min;
	cout << "enter the number:";
	cin >> num;
	max = min = num;
	while(cin >> num,num != 0)
	{
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
	}
	cout << "the max is " << max <<endl
		 << "the min is " << min <<endl;
	return 0;
}