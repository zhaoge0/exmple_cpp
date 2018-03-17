#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int a,b;
	cout << "please enter 2 numbers:" ;
	cin >> a >> b;
	cout << "交换前 ：a = " << a << "; b = "  << b << endl;
	cout << "表达式 a/b = " << a/b << endl;
	
	double x = double(a)/b;
	cout << "表达式  double(a)/b = " << setprecision(8) << x << endl;
	cout << "表达式  double(a)/b = " << setiosflags(ios::scientific) << x << endl;
	// 交换　ａ　和　ｂ
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "交换后　：a = " << a <<  ", b = " << b << endl; 
	return 0;
}
