#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string input;
	string nama_rahasia("ucup"); //gabisa pake spasi
	
	while(true){
		cout << "masukan nama: ";
		cin >> input;
		cout << input << endl;
		
		if(input == nama_rahasia){
		cout << "benar" << endl;
		break;
		}
		cout << "salah !!" << endl;
	}
	cout << "selesai" << endl;

}
