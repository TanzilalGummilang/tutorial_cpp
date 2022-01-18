#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ofstream myFile;

	myFile.open("data1.txt", ios::trunc);
	myFile << "\nlagi baru data 1";
	myFile.close();

	int a = 1234567;
	myFile.open("data2.txt", ios::out);
	myFile << "lagi baru data 2\n";
	myFile << a;
	myFile.close();

	myFile.open("data3.txt", ios::app); //append
	myFile << "\nlagi baru data 3";
	myFile.close();


	cin.get();
	return 0;
}