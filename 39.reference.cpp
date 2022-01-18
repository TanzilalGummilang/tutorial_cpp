#include <iostream>
using namespace std;

int main(){
	
	//variabel
	int a=5;
	cout << "alamat a : " << &a << endl;
	cout << "nilai a  : " << a << endl<<endl;
	
	//reference
	int &b=a;
	cout << "alamat b :" << &b << endl;
	cout << "nilai b  : " << b << endl<<endl;
	
	a=10;
	cout << "nilai a  : " << a << endl;
	cout << "alamat a : " << &a << endl;
	cout << "nilai b  : " << b << endl;
	cout << "alamat b : " << &b << endl<<endl;
}
