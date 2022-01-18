#include <iostream>
using namespace std;

//fungsi pangkat
int pangkat_iterasi(int a, int b){
	int hasil=a;
	for(int i=1; i<b; i++){
		hasil = hasil*a;
		cout << a << "*";
	}
	cout << a << endl;
	return hasil;
}

//fungsi rekursif
int pangkat_rekursif(int a, int b){
	if(b<=1){
		cout << a << endl;
		return a;
	}else{
		cout << a << "*";
		return a*pangkat_rekursif(a, (b-1));
	}
}

int main(){
	
	int a,b;
	cout << "masukan angka: ";
	cin >> a;
	cout << "masukan pangkat: ";
	cin >> b;
	
	cout << "=====================================================\n";
	cout << "hasil iterasi: " << pangkat_iterasi(a,b) << endl;
	cout << "=====================================================\n";
	cout << "hasil rekursif: " << pangkat_rekursif(a,b) << endl;
}
