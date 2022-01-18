#include <iostream>
using namespace std;

// prototype
double vol_kubus(double p=1, double l=1, double t=1);

int main(){
	
	cout << "volume kubus 1: " << vol_kubus(10,10,10) << endl;
	cout << "volume kubus 2: " << vol_kubus(10,10) << endl;
	cout << "volume kubus 3: " << vol_kubus(10) << endl;
	cout << "volume kubus 4: " << vol_kubus() << endl;;
	
	/*
	double p,l,t,hasil;
	cout << "masukan panjang: ";
	cin >> p;
	cout << "masukan lebar: ";
	cin >> l;
	cout << "masukan tinggi: ";
	cin >> t;
	
	cout << "=" << endl;
	cout << p << "*" << l << "*" << t << " = ";
	hasil = vol_kubus(p,l,t);
	cout << hasil << endl;
	*/
}

// fungsi vol_kubus
double vol_kubus(double p, double l, double t){
	return p*l*t;
}

// nilai/argumen default harus di atas 
