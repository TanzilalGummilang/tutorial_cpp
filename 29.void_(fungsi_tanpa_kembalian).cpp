#include <iostream>
using namespace std;

//reporter
int kuadrat(int x){
	int y;
	y=x*x;
	return y;
	
}

//worker
void tampilkan(int input){
	cout << "\nmenampilkan dgn void\n";
	cout << "= ";
	cout << input << endl;
	 
}

int main(){
	
	// kuadrat
	int input, hasil;
	cout << "nilai kuadrat dari: ";
	cin >> input;
	
	hasil = kuadrat(input);
	tampilkan(hasil);
}



