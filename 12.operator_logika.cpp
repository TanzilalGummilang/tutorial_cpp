#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 2;
	bool hasil;
	
	// not (!)
	cout << "===== not ===== \n";
	hasil = !(a==3);
	cout << hasil <<endl<<endl;
	
	// and (&)
	cout << "===== and ===== \n";
	hasil = (a==3) and (b==2);
	cout << hasil << endl;
	hasil = (a==3) and (b==3);
	cout << hasil << endl;
	hasil = (a==2) && (b==2);
	cout << hasil << endl;
	hasil = (a==2) && (b==3);
	cout << hasil << endl << endl;
	
	// or |
	cout << "===== or ===== \n";
	hasil = (a==3) or (b==2);
	cout << hasil << endl;
	hasil = (a==3) or (b==3);
	cout << hasil << endl;
	hasil = (a==2) || (b==2);
	cout << hasil << endl;
	hasil = (a==2) || (b==3);
	cout << hasil << endl << endl;
}
