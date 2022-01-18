#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int hasil;
	
	cout << "nilai a: ??" << endl;
	cout << "nilai b: ??" << endl << endl;
	
	cout << "masukan nilai a: ";
	cin >> a;
	cout << "masukan nilai b: ";
	cin >> b;
	
	// tambah +
	hasil = a+b;
	cout << a << " + " << b << " = " << hasil << endl;
	
	// kurang -
	hasil = a-b;
	cout << a << " - " << b << " = " << hasil << endl;
	
	// kali *
	hasil = a*b;
	cout << a << " x " << b << " = " << hasil << endl;
	
	// bagi /, jika hasilnya desimal maka dibulatkan kebawah
	hasil = a/b;
	cout << a << " / " << b << " = " << hasil << endl;
	
	// modulus %, gabisa pake float
	hasil = a%b;
	cout << a << " mod " << b << " = " << hasil << endl;
	
	// kurung ()
	hasil = (a+b)*a;
	cout << hasil << endl;
}
