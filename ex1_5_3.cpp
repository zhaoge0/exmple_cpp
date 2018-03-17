#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,n;
	x = y = 1;
	n = --x && ++y;
	cout << "n = " << n << "x = " << x << "y = " << y <<endl;
	n = (--x)||(++y);
	cout << n << endl;
	cout << "x = " << x << "y = " << y << endl;
	
	return 0;
}
