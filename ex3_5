#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int row;
	cout << "请输入行数：";
	cin >> row;
	int i,j,n;
	n = row/2+1;
	for(i = 1; i <= n; i++)
	{
		for(j=1;j<=n-i;j++) cout <<' ';
		for(j=1;j<=2*i-1;j++) cout << '*';
		cout << endl;
	}
	for(i = 1; i <= n-1; i++)
	{
		for(j=1;j<=i;j++) cout <<' ';
		for(j=1;j<=row-2*i;j++) cout << '*';
		cout << endl;
	}
	return 0;
}
