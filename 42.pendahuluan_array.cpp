#include <iostream>
using namespace std;

int main(){
	
	int nilai[5] = {10,11,12,13,14};
	cout << &nilai[0] << " nilainya: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya: " << nilai[4] << endl;
	
	int *ptr = nilai;
	*(ptr+3) = 23; // indeks ke [4], dari 13 jadi 23
	//atau
	nilai[4] = 24;
	
	cout << endl;
	
	cout << &nilai[0] << " nilainya: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya: " << nilai[4] << endl;
	
	cout << endl;
	
	cout << "ukuran array: " << sizeof(nilai) << " byte" << endl;
	cout << "jumlah member array: " << sizeof(nilai)/sizeof (int) << " byte" << endl;
}
