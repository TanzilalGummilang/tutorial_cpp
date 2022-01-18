#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kalimat_1("dayat suka olahraga supaya sehat");
	string kalimat_2("ucup suka makan pisang di pagi hari");
	
	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl;
	
	// substring, mengambil string di tengah tengah
	// substr(index, panjang)
	cout << kalimat_1.substr(11,8) << endl;
	cout << kalimat_2.substr(16,6) << endl;
	
	// mencari posisi index dari string
	cout << "posisi olahraga: " << kalimat_1.find("olahraga") << endl;
	cout << "posisi pisang: " << kalimat_2.find("pisang") << endl;
	
	int a = kalimat_1.find("a");
	cout << a << endl;
	cout << kalimat_1.find("a", a+1) << endl;
	
	// mencari posisi index dari string dari belakang
	cout << kalimat_2.rfind("i") << endl;
	
	/*string huruf;
	while(true){
		cout << "masukan huruf: ";
		cin >> huruf;
		
		if(){
			cout << huruf << endl;
			cout << kalimat_1.find(huruf, huruf+1) << endl;
		}
	}*/
	
}
