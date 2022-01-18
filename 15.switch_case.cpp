#include <iostream>
using namespace std;

int main()
{
	// 1	
	/*int z;
	
	cout << "masukan angka: ";
	cin >> z;
	
	switch(z==1){
		case true:
			cout << "oke good" << endl;
	}*/
	
	// 2
	int a;
	
	cout << "masukan angka: ";
	cin >> a;
	
	switch(a){
		case 1:
			cout << "a = 1" << endl;
			break;
		case 2:
			cout << "a = 2" << endl;
			break;
		case 3:
			cout << "a = 3" << endl;
			break;
		case 4:
			cout << "a = 4" << endl;
			break;
		case 5:
			cout << "a = 5" << endl;
			break;
		default:
		cout << "angka yg anda masukan tidak ada dalam daftar kami !" << endl;
	}
}
