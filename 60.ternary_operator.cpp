#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int a,b;
	string hasil_1, hasil_2, output;

	hasil_1 = "benar";
	hasil_2 = "salah";

	a = 5;
	cout << "nilai a: " << a << endl;
	cout << "masukan nilai b: ";
	cin >> b;

	output = (a < b) ? hasil_1 : hasil_2;

	//atau sama dengan seperti:
	/*
	if(a < b){
		output = hasil_1;
	}else{
		output = hasil_2;
	}
	*/

	cout << output << endl;

	cin.get();
	return 0;
}

// ternary operator = ?
// (kondisi) ? hasil_1 : hasil_2