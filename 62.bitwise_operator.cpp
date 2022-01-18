#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void printBinary(unsigned short val, string nama){
	cout << nama << " = " << bitset<8>(val) << endl;
}

int main(){
	
	unsigned short a,b,c;
	a=6, b=10;

	// and
	cout << "\n& - bitwise AND" << endl;
	c = a & b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c =" << c << endl;

	// or
	cout << "\n| - bitwise OR" << endl;
	c = a | b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c =" << c << endl;

	// xor
	cout << "\n^ - bitwise XOR" << endl;
	c = a ^ b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c =" << c << endl;

	// not
	cout << "\n~ - bitwise NOT" << endl;
	c = ~a;
	printBinary(a, "a");
	printBinary(c, "c");
	cout << "c =" << c << endl;

	// shl
	cout << "\n<< - bitwise SHL" << endl;
	c = a << 1;
	printBinary(a, "a");
	printBinary(c, "c");
	cout << "c =" << c << endl;

	// shr
	cout << "\n>> - bitwise SHR" << endl;
	c = a >> 1;
	printBinary(a, "a");
	printBinary(c, "c");
	cout << "c =" << c << endl;
	
	cin.get();
	return 0;
}

// bitwise operator
// &	- biwise AND
// |	- biwise OR
// ^	- biwise XOR
// ~	NOT
// <<	SHL shift bits left
// >>	SHR shift bits right