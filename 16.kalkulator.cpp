#include <iostream>
using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;
	
	cout << "\n===== kalkulator sederhana =====\n\n";
	
	cout << "masukan nilai pertama: ";
	cin >> a;
	cout << "masukan operator (+,-,*,/): ";
	cin >> aritmatika;
	cout << "masukan nilai kedua: ";
	cin >> b;
	
	cout << "=====\n";
	cout << "hasil perhitungan: ";
	cout << a <<" "<< aritmatika <<" "<< b << " = ";
	
	if (aritmatika == '+') {
		hasil = a+b;
	} else if (aritmatika == '-') {
		hasil = a-b;
	} else if (aritmatika == '*') {
		hasil = a*b;
	} else if (aritmatika == '/') {
		hasil = a/b;
	} else {
		cout << "\ndata atau operator anda tidak kompatibel dengan app ini !!\n";
	}
	cout << hasil << endl;
}
