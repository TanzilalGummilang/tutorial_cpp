#include <iostream>
using namespace std;

int main(){


	int a = 5;
	float b = 6.67f;
	char c = 'd';

	// float b di casting jadi int b
	cout << a + (int)b << endl;

	cout << c << endl;
	cout << (int)c << endl;
	cout << c + a << endl; // akan menghasikan int

	// c + a lalu di casting ke char
	cout << (char)(c + a) << endl;

	// d = 100
	// 100 + 5
	// defghi -> huruf 'd' ke huruf 'i' berjarak 5

	cin.get();
	return 0;
}