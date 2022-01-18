#include <iostream>
#include <array>
using namespace std;

int main(){
	
	cout << "=========================================\n";
	cout << "program menampilkan grafik nilai\n";
	array<int,10> nilai;
	cout << "=========================================\n";
	
	for(int i=0; i<=nilai.size(); i++){
		cout << "jumlah mahasiswa dgn nilai ";
		if(i==0){
			cout << "0-9: ";
		}else if(i==10){
			cout << "100: ";
		}else{
			cout << i*10 << "-" << (i*10)+9 << ": ";
		}
		cin >> nilai[i];
	}
	cout << "\n=========================================\n";
	cout << "grafik nilai\n";
	cout << "=========================================\n";
	
	for(int i=0; i<=nilai.size(); i++){
		if(i==0){
			cout << "0-9  : ";
		}else if(i==10){
			cout << "100  : ";
		}else{
			cout << i*10 << "-" << (i*10)+9 << ": ";
		}
		for(int bintang=0; bintang<=nilai[i]; bintang++){
			cout << "*";
		}
		cout << endl;
	}
	
}
