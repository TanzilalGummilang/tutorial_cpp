#include <iostream>
using namespace std;

int kuadrat(int x){
	int y;
	y=x*x;
	return y;
	
}
int tambah(int a,int b){
	int c;
	c=a+b;
	return c;
}

int main(){
	
	// kuadrat
	int input, hasil;
	cout << "nilai kuadrat dari: ";
	cin >> input;
	
	hasil = kuadrat(input);
	//cout << input << " x " << input << " = ";
	cout << endl << "= " << hasil << endl<<endl;
	
	// tambah
	int a, b, hasil_tambah;
	cout << "masukan nilai pertama: ";
	cin >> a;
	cout << "masukan nilai kedua: ";
	cin >> b;
	
	cout << a << " + " << b << " = ";
	hasil_tambah = tambah(a,b);
	cout << hasil_tambah << endl;
}
