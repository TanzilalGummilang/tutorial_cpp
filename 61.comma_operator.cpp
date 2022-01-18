#include <iostream>
using namespace std;

void printData(int val){
	cout << val << endl;
}

int main(){
	
	int a, b, c;

	a = ( b=2, printData(b), c=4, printData(c), (b+c) );

	cout << a << endl;

	cin.get();
	return 0;
}
