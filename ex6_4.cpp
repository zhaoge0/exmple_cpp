#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[6][6],i,j;
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (j == 0 || i == j)
			{
				a[i][j] = 1;
			}else if (i < j)
			{
				a[i][j] = a[i][j-1] + 1;
			}else
			{
				a[i][j] = a[i-1][j-1] + a[i-1][j];
			}
			cout << setw(6) << a[i][j];
		}
		cout << '\n';
	}
	return 0;
}