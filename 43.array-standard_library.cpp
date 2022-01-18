#include <iostream>
#include <array>
using namespace std;

int main(){
	
	//array <tipedata, jumlah array> nama array
	array <int,6> nilai; 
	for(int i=0; i<=5; i++){
		nilai[i] = i;
		cout << "nilai: [" << i << "] = " << nilai[i];
		cout << " address: " << &nilai[i] << endl;
	}
	
	cout << endl;
	
	// jumlah array
	cout << "jumlah array: " << nilai.size() << endl;
	// alamat awal array
	cout << "address awal: " << nilai.begin() << endl;
	// alamat akhir array
	cout << "address akhir: " << nilai.end() << endl;
	// nilai dgn index
	cout << "nilai ke-: " << nilai.at(5) << endl;
	
}

/*
	Untuk yang menggunakan DEV C++ tapi masih error di standar library array, coba ikutin cara ini :
1. Klik "Tools" yang ada di atas, dan klik "Compiler Options"
2. Pilih "Settings", lalu klik "Code Generation"
3. Pilih "Language Standard (-std)", lalu klik tombol yang ada dipojok kanan, pilih "GNU C++11" atau "ISO C++11". Kalo udah klik "Ok".
*/
