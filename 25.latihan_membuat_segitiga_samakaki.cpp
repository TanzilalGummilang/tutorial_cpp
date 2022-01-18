#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "masukan banyaknya pola: ";
	cin >> n;
	
	cout << "\n========== <pola 5>\n";
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout << " ";
		}
		for(int k=1; k<=((i*2)-1); k++){
			cout << "o";
		}
		cout << endl;
	}
	
	cout << "\n========== <pola 6>\n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			cout << " ";
		}
		for(int k=n; k>=((i*2)-n); k--){
				cout << "o";
		}
		cout << endl;
	}
	
	cout << "\n========== <pola 7>\n";
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout << " ";
		}
		for(int k=1; k<=((i*2)-1); k++){
			cout << "o";
		}
		cout << endl;
	}
	for(int i=2; i<=n; i++){
		for(int j=1; j<i; j++){
			cout << " ";
		}
		for(int k=n; k>=((i*2)-n); k--){
				cout << "o";
		}
		cout << endl;
	}
}
