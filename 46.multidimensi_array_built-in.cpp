#include <iostream>
using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
	int index = 0;
	for(int i=0; i<baris; i++){
		for(int j=0; j<kolom; j++){
			cout << *(ptrArray+index) << " ";
			index++;
		}
		cout << endl;
	}
}

int main(){
	
	// array multidimensi
	// array [baris][kolom]
	
	const int baris = 4;
	const int kolom = 4;
	int arrayMD[baris][kolom] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	printArray(*arrayMD, 2,4); cout<<endl;
	printArray(*arrayMD, 4,2); cout<<endl;
	printArray(*arrayMD, 2,2); cout<<endl;
	printArray(*arrayMD, 1,2); cout<<endl;
	printArray(*arrayMD, 2,1); cout<<endl;
	/*
	array = 3x3
	cout << arrayMD[0][0] << " " << arrayMD[0][1] << " " << arrayMD[0][2] << endl;
	cout << arrayMD[1][0] << " " << arrayMD[1][1] << " " << arrayMD[1][2] << endl;
	cout << arrayMD[2][0] << " " << arrayMD[2][1] << " " << arrayMD[2][2] << endl;	
	*/
	
}
