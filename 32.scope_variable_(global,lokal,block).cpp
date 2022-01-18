#include <iostream>
using namespace std;

int x=10; // variable global

// fungsi mengambil variable global
int ambil_global(){ 
	return x;
}

// fungsi
int x_lokal(){ 
	int x=3; // variable lokal dari scope x_lokal
	return x;
}

int main(){
	
	cout << "1. global: " << x << endl;
	int x=2; // variable lokal dari scope main
	cout << "2. lokal main: " << x << endl;
	cout << "3. ambil_global: " << ambil_global() << endl;
	cout << "4. x_lokal: " << x_lokal() << endl;
	cout << "5. lokal main: " << x << endl;
	{
		cout << "6. lokal main: " << x << endl;
		int x=4;
		cout << "7. lokal block: " << x << endl;
	cout << "8. ambil_global: " << ::x << endl;		
	}
	cout << "9. lokal main: " << x << endl;
}
