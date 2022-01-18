#include <iostream>
using namespace std;

int main(){
	
	int arrayNilai[10] = {0,10,20,30,40,50,60,70,80,90};
	
	for(int nilai : arrayNilai){
		cout << "address: " << &nilai;
		cout << " nilai: " << nilai << endl;
		nilai = 1; 	//tidak pengaruh
	}
	cout << endl;
	
	// memanipulasi array dgn reference
	for(int &nilaiRef : arrayNilai){
		nilaiRef *=2;
		cout << "address: " << &nilaiRef;
		cout << " nilai: " << nilaiRef << endl;
	}
	
}

// looping utk array di c++11 keatas
/*
	for(deklarasi variable : nama_array){
		statement
	}
*/
