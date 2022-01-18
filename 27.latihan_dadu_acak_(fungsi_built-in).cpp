#include <iostream>
#include <cstdlib> // mengandung fungsi random
#include <ctime> // library utk srand(time(0))
using namespace std;

int main(){
	srand(time(0)); // supaya saat di run kembali, tidak menghasilkan angka yg sama seperti run sebelumnya
	while(true){
		char lanjut;
		cout << "mau lempar dadu ?? (y/n) \n";
		cin >> lanjut;
		
		cout << endl;
		if(lanjut=='y'){
			cout << "you got the number of: \n";
			cout << "=====================\n";
			cout << 1+(rand()%6) << endl; // rumusnya
			cout << "=====================\n\n";
		}else if(lanjut=='n'){
			cout << "========\n";
			cout << "bye.. :)\n";
			cout << "========\n\n";
			break;
		}else{
			cout << "==========================================\n";
			cout << "just 'y' or 'n' (yes/no) ?? (lowercase !!)" << endl;
			cout << "==========================================\n\n";
		}
	}
	
	/*
	for(int i=0; i<10; i++){
		cout << rand() << endl;
	}
	*/
}
