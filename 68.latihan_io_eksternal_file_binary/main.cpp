// can beres !! gagal mun teu salah mah

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct mahasiswa{
	int NIM;
	string nama;
	string jurusan;
};

int main(){

	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

	mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

	mahasiswa1.NIM = 21001;
	mahasiswa1.nama = "ucup";
	mahasiswa1.jurusan = "memasak";

	mahasiswa2.NIM = 21002;
	mahasiswa2.nama = "otong";
	mahasiswa2.jurusan = "menjahit";

	mahasiswa3.NIM = 21003;
	mahasiswa3.nama = "sandra";
	mahasiswa3.jurusan = "mesin";

	myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(mahasiswa));
	myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(mahasiswa));
	myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(mahasiswa));

	cin.get();
	return 0;
}