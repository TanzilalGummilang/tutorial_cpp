#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "masukan panjang pola: ";
	cin >> n;
	
	// pola 1
	cout << "\n========== <pola 1>\n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << "o";
		}
		cout << endl;
	}
	
	// pola 2
	cout << "\n========== <pola 2>\n";
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			cout << "o";
		}
		cout << endl;
	}
	
	// pola 3
	cout << "\n========== <pola 3>\n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			cout << " ";
		}
		for(int k=n; k>=i; k--){
				cout << "o";
		}
		cout << endl;
	}
	
	// pola 4
	cout << "\n========== <pola 4>\n";
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout << " ";
		}
		for(int k=1; k<=i; k++){
			cout << "o";
		}
		cout << endl;
	}
}
