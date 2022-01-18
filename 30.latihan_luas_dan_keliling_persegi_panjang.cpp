#include <iostream>
using namespace std;

// fungsi luas persegi panjang
double hitung_luas(double p, double l){
	double luas = p*l;
	return luas;
}

// fungsi keliling persegi panjang
double hitung_keliling(double p, double l){
	double keliling = 2*(p+l);
	return keliling;
}

// fungsi tampilkan
void tampilkan_luas(double p, double l){
	cout << "luas: ";
	cout << hitung_luas(p,l) << endl;
}
void tampilkan_keliling(double p, double l){
	cout << "keliling: ";
	cout << hitung_keliling(p,l) << endl;
}

int main(){
	
	double p,l;
	cout << "masukan panjang: ";
	cin >> p;
	cout << "masukan lebar: ";
	cin >> l;
	cout << "===================\n";
	
	tampilkan_luas(p,l);
	tampilkan_keliling(p,l);
}
