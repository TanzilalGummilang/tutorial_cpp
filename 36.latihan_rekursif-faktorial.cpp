#include <iostream>
using namespace std;

//prototype
int faktorial(int n);

int main(){
	
	int angka, hasil;
	cout << "masukan angka: ";
	cin >> angka;
	
	cout << angka << "!" << " = ";
	hasil = faktorial(angka);
	cout << angka << "!" << " = ";
	cout << hasil << endl;
}

//fungsi faktorial
int faktorial(int n){
	if(n<=1){
		cout << n << endl;
		return n;
	}else{
		cout << n << "*";
		return n*faktorial(n-1);
	}
}
