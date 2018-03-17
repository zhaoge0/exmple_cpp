#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i = 3, j = 5, k, l, m=19, n=-56;
	k = ++i;
	l = j++;
	m+=i++;
	n-=--j;
	cout << i << j << k << l << m << n <<endl;
	return 0;
}
