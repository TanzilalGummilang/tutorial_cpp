#include <iostream>
#include <string>
using namespace std;

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun;
	// struct aktor
	aktor pemeran1;
	aktor pemeran2;
};

int main(){
	
	aktor aktor1, aktor2;
	film film1, film2;

	// aktor 1
	aktor1.nama = "michael otong";
	aktor1.tahun_lahir = 1990;

	// aktor 1
	aktor2.nama = "cassandra juminten";
	aktor2.tahun_lahir = 1995;

	// film 1
	cout << "=== film 1 ===\n";
	film1.judul = "indonesian martabak";
	film1.genre = "drama";
	film1.tahun = 2019;
	film1.pemeran1 = aktor1;
	film1.pemeran2 = aktor2;

	cout << film1.judul << endl;
	cout << film1.genre << endl;
	cout << film1.tahun << endl;
	cout << film1.pemeran1.nama << endl;
	cout << film1.pemeran2.nama << endl;

	// film 2
	cout << "=== film 2 ===\n";
	film2.judul = "maling duit";
	film2.genre = "action";
	film2.tahun = 2020;
	film2.pemeran1 = aktor1;
	film2.pemeran2 = aktor2;

	cout << film2.judul << endl;
	cout << film2.genre << endl;
	cout << film2.tahun << endl;
	cout << film2.pemeran1.nama << endl;
	cout << film2.pemeran2.nama << endl;

	cin.get();
	return 0;
}
