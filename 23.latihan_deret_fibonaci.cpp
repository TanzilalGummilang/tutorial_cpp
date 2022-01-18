#include <iostream>
using namespace std;

int main(){
	
	int n, fn, fn1, fn2;
	cout << "masukan nilai n: ";
	cin >> n;
	
	fn1 = 1;
	fn2 = 0;
	cout << fn << endl; 
	for(int i=1; i<=n; i++){
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		
		cout << fn << endl;
	}
}

// f_n = f_n1 + f_n2

/*
	1 1 2 3 5 8 13 21

	fn1+fn2=fn
	0+1=1
	1+1=2
	1+2=3
	2+3=5
	3+5=8
	5+8=13
	8+13=21
*/
