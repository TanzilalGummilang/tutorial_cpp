#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(array <int,arraySize> &angka){
	cout << "array: ";
	for(int &a : angka){
		cout << a << " ";
	}
	cout << endl;
}
void printArray(array <char,arraySize> &huruf){
	cout << "array: ";
	for(char &a : huruf){
		cout << a << " ";
	}
	cout << endl;
}

int main(){
	
	array <int,arraySize> angka = {9,5,6,4,3,7,2,8,1,0};
	array <char,arraySize> huruf = {'c','h','j','e','r','t','y','v','b','a'};
	
	printArray(angka);
	sort(angka.begin(), angka.end());
	printArray(angka);
	cout<<endl;
	printArray(huruf);
	sort(huruf.begin(), huruf.end());
	printArray(huruf);
	
}
