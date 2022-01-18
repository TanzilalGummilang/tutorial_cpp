#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout << "masukan angka pertama: ";
	cin >> a;
	cout << "masukan operator: ";
	cin >> aritmatika;
	cout << "masukan angka kedua: ";
	cin >> b;
	
	switch(aritmatika){
		case '+':
			hasil = a+b;
			break;
		case '-':
			hasil = a-b;
			break;
		case '*':
			hasil = a*b;
			break;
		case '/':
			hasil = a/b;
			break;
		default:
			cout << "\ndata atau operator tidak tersedia \n";
	}
	cout << a << aritmatika << b << " = ";
	cout << hasil << endl;
}
