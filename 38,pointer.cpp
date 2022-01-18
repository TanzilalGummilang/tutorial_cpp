#include <iostream>
using namespace std;

int main(){
	
	int a=5;
	
	//pointer
	int *aPtr = 0;
	aPtr = &a;
	
	//int a memiliki nilai dan alamat
	
	cout << "nilai a: " << a << endl;
	cout << "alamat a: " << aPtr << endl;
	
	//mengambil data dari pointer (deferencing)
	a=10;
	cout << "mengambil nilai dari pointer aPtr: " << *aPtr << endl;
}
