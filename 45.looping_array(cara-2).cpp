#include <iostream>
#include <array>
using namespace std;

int main(){
	
	array <int,10> arrayNilai = {0,10,20,30,40,50,60,70,80,90};
	
	for(int nilai : arrayNilai){
		cout << "address: " << &nilai;
		cout << " nilai: " << nilai << endl;
		nilai = 1; 	//tidak pengaruh
	}
	cout << endl;
	for(int &nilaiRef : arrayNilai){
		nilaiRef *=2;
		cout << "address: " << &nilaiRef;
		cout << " nilai: " << nilaiRef << endl;
	}
	
}
