#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Rectri{
public:
	friend ostream& operator<<(ostream&,Rectri&);
	Rectri(double a,double b):a(a),b(b){	}
	void setab(double a=0,double b=0){
		this->a = a;
		this->b = b;
	}

private:
	double a,b;
};

ostream& operator<<(ostream &output, Rectri&rect)
{
	output << "=============\na = "<< rect.a << endl
			<< "b = "<< rect.b << endl
			<< "c = "<< sqrt(rect.a*rect.a + rect.b*rect.b) << "\n=============\n" << endl;
	return output;
}


int main(int argc, char** argv) {
	double a,b;
	cout << "please input a and b of a Rectriangle:";
	cin >> a >> b;
	Rectri triangle(a,b);
	triangle.setab();
	cout << triangle << endl;
	return 0;
}
