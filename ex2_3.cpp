#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num[3],max;
	cout << "please input 3 numbers :";
	for(int i = 0; i<3; ++i) {
		cin >> num[i];
	}
	if(num[0]>num[1]) {
		max = num[0];
	} else {
		max = num[1];
	}
	if(max < num [2]) {
		max = num[2];
	}
	cout << "the maxiume is " << max << "." << endl;
	return 0;
}
