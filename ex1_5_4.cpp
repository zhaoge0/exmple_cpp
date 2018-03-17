#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,x;
	a = 15, b = 18, c = 21;
	x = a < b || c++;
	cout << "x = " << x << "c = " << c << endl;
	return 0;
}
