#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int a,b;
	cout << "please enter 2 numbers:" ;
	cin >> a >> b;
	cout << "����ǰ ��a = " << a << "; b = "  << b << endl;
	cout << "���ʽ a/b = " << a/b << endl;
	
	double x = double(a)/b;
	cout << "���ʽ  double(a)/b = " << setprecision(8) << x << endl;
	cout << "���ʽ  double(a)/b = " << setiosflags(ios::scientific) << x << endl;
	// �������ᡡ�͡���
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "�����󡡣�a = " << a <<  ", b = " << b << endl; 
	return 0;
}
