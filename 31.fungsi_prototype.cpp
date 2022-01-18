#include <iostream>
using namespace std;

// prototype
double hitung_luas(double p, double l);
void println(double a);

int main(){
	
	double p, l, luas;
	cin >> p;
	cin >> l;
	
	luas = hitung_luas(p,l);
	println(luas);
}

// fungsi luas persegi panjang
double hitung_luas(double p, double l){
	return p*l;
}

// fungsi println
void println(double a){
	cout << "hasil: " << a;
}
