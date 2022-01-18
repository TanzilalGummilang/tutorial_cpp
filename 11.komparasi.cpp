#include <iostream>
using namespace std;

int main()
{
	int a, b;
	bool hasil;
	
	cout << "nilai a: ??" << endl;
	cout << "nilai b: ??" << endl;
	cout << "true = 1" << endl;
	cout << "false = 0" << endl << endl;
	
	cout << "masukan nilai a: ";
	cin >> a;
	cout << "masukan nilai b: ";
	cin >> b;
	cout << endl;
	
	// sebanding ==
	hasil = a==b;
	cout << a << " == " << b << " -> " << hasil << endl;
	
	// tak sebanding !=
	hasil = a!=b;
	cout << a << " != " << b << " -> " << hasil << endl;
	
	// kurang dari <
	hasil = a<b;
	cout << a << " < " << b << " -> " << hasil << endl;
	
	// lebih dari >
	hasil = a>b;
	cout << a << " > " << b << " -> " << hasil << endl;
	
	// kurang dari samadengan <=
	hasil = a<=b;
	cout << a << " <= " << b << " -> " << hasil << endl;
	
	// lebih dari samadengan >=
	hasil = a>=b;
	cout << a << " >= " << b << " -> " << hasil << endl;
}
