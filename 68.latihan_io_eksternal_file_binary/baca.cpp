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
	mahasiswa dataBaca;
	myFile.open("data.bin", ios::in | ios::binary);

	// 0---72---|---72---|---72---|
	//cout << sizeof(mahasiswa) << endl;

	myFile.seekp(0);

	myFile.read(reinterpret_cast<char*>(&dataBaca), sizeof(mahasiswa));
	cout << dataBaca.NIM << endl;
	cout << dataBaca.nama << endl;
	cout << dataBaca.jurusan << endl;

	myFile.close();

	cin.get();
	return 0;
}