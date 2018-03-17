#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char c;
	cout << "please input a character :" ;
	cin >> c;
	if(c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
	{
		cout << int(c) << endl;
	}
	return 0;
}
