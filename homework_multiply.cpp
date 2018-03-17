#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "\t\t\t九九乘法表" << endl;
	cout << "\t\t\t====================" << endl;
	for (int i = 1; i < 10; ++i)
	 {
	 	for (int j = 1; j < 10; ++j)
	 	{
	 		if (j < i)
	 		{
	 			cout << "\t";
	 			continue;
	 		}
	 		cout << i << "×" << j << "=" << j*i << "\t";
	 	}
	 	cout << endl;
	 } 
	return 0;
}
