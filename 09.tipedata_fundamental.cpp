#include <iostream>
#include <limits>
using namespace std;

int main()
{
	// bil. bulat
	
	// int: 4 byte=32 bit, max=2147483647, min=-2147483648
	int a = 1;
	cout << "nilai a: " << a << endl;
	cout << sizeof(a) << " byte" << endl;
	cout << "max limit int: "<< numeric_limits<int>::max() << endl;
	cout << "min limit int: "<< numeric_limits<int>::min() << endl;
	cout << endl;
	
	// unsigned int: 4byte, max=4294967295, min=0
	unsigned int u = 1;
	cout << "nilai u: " << u << endl;
	cout << sizeof(u) << " byte" << endl;
	cout << "max limit unsigned int: "<< numeric_limits<unsigned int>::max() << endl;
	cout << "min limit unsigned int: "<< numeric_limits<unsigned int>::min() << endl;
	cout << endl;
	
	// long long: 8 byte=64 bit, max=9223372036854775807, min=-9223372036854775808
	long long b = 2;
	cout << "nilai b: " << b << endl;
	cout << sizeof(b) << " byte" << endl;
	cout << "max limit long long: "<< numeric_limits<long long>::max() << endl;
	cout << "min limit long long: "<< numeric_limits<long long>::min() << endl;
	cout << endl;
	
	// short: 2 byte=16 bit, max=32767, min=-32768
	short c = 2; 
	cout << "nilai c: " << b << endl;
	cout << sizeof(c) << " byte" << endl;
	cout << "max limit short: "<< numeric_limits<short>::max() << endl;
	cout << "min limit short: "<< numeric_limits<short>::min() << endl;
	cout << endl;
	
	
	// bil. desimal
	
	// float: 4 byte=32 bit, max=3.40282e+038, min=1.17549e-038
	float d = 2.5; 
	cout << "nilai d: " << d << endl;
	cout << sizeof(d) << " byte" << endl;
	cout << "max limit float: "<< numeric_limits<float>::max() << endl;
	cout << "min limit float: "<< numeric_limits<float>::min() << endl;
	cout << endl;
	
	//	double: 8 byte=64 bit, max=1.79769e+308, min=2.22507e-308
	double e = 2; 
	cout << "nilai e: " << e << endl;
	cout << sizeof(e) << " byte" << endl;
	cout << "max limit double: "<< numeric_limits<double>::max() << endl;
	cout << "min limit double: "<< numeric_limits<double>::min() << endl;
	cout << endl;
	
	
	// character: 1bit
	char f = '2';
	cout << "nilai f: " << f << endl;
	cout << sizeof(f) << " byte" << endl;
	cout << "max limit char: "<< numeric_limits<char>::max() << endl;
	cout << "min limit char: "<< numeric_limits<char>::min() << endl;
	cout << endl;
	
	// booelan: true/false
	bool g = true;
	cout << "nilai g: " << g << endl;
	cout << sizeof(g) << " byte" << endl;
	cout << "max limit bool: "<< numeric_limits<bool>::max() << endl;
	cout << "min limit bool: "<< numeric_limits<bool>::min() << endl;
	cout << endl;
}
