#include <iostream>
using namespace std;

void yn(bool yesORno){
	if(yesORno == true){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
}

int main()
{
	/*int a;
	
	cout << "masukan password: ";
	cin >> a;
	
	// if statement
	// kondisi dalam bentuk boolean
	if (a==12345) {
		cout << "anda berhasil masuk" << endl;
	} else {
		cout << "password salah !!" << endl;
	}
	cout << "selesai.." << endl;*/

	/*char yn;

	cout << "masukan angka: " << endl;
	cin >> yn;

	if(yn == '1'){
		cout << "true" << endl;
	}else if(yn == '0'){
		cout << "false" << endl;
	}else{
		cout << "not support !" << endl;
	}*/

	bool yes = true;
	bool no = false;

	yn(true);

}
