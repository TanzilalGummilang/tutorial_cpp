#include <iostream>
using namespace std;

int main()
{
	cout << "\n==loop 1==\n";
	for(int i=1; i<=10; i++){
		cout << "program ";
		cout << i << endl;
	}
	
	cout << "\n==loop 2==\n";
	for(int i=1; i<=10; i+=2){
		cout << "program ";
		cout << i << endl;
	}
	
	cout << "\n==loop 3==\n";
	for(int i=1; i>=-10; i--){
		cout << "program ";
		cout << i << endl;
	}
	
	int total = 0;
	cout << "\n==loop 4==\n";
	for(int i=1; i<=10; total+=i,i++){
		cout << i <<"  ||  "<< total << endl;
	}
}

/*
	for(inisialisasi; loop kondisi; increment atau decrement){
		statement
	}
*/
