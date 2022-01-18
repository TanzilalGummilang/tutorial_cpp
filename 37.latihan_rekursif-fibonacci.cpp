#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
	
	int angka, hasil;
	cout << "menghitung fibonacci ke: ";
	cin >> angka;
	hasil = fibonacci(angka);
	
	cout << "hasil fibonacci: ";
	cout << hasil << endl;
}

int fibonacci(int n){
	if((n==0) || (n==1)){
		return n;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

/*
fibonacci TIDAK disarankan memakai rekursif,
karena menghabiskan memori,
lebih baik pake iterasi aja
*/

