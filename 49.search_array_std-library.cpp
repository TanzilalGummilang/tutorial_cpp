#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

const size_t arraySize = 10;

void printArray(array <int,arraySize> &angka){
	cout << "array: ";
	for(int &a : angka){
		cout << a << " ";
	}
	cout<<endl;
}

int main(){
	
	array <int,arraySize> angka = {9,0,2,1,3,5,4,7,6,8};
	printArray(angka);
	
	int angkaCari;
	bool ketemu;
	
	//sort dulu
	//searh -> binary_search
	
	cout << "masukan angka yg anda cari dari data-data diatas: \n";
	cin >> angkaCari;
	sort(angka.begin(), angka.end());
	ketemu = binary_search(angka.begin(), angka.end(), angkaCari);
	
	if(ketemu){
		cout << "ada";
	}else{
		cout << "tidak ada";
	}
		
}
