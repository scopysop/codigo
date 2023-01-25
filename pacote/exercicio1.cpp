#include <iostream>
using namespace std;

int main(){
	
	double A,B,C,media;
	
	
	cout << " Primeira nota: " ;
	cin >> A ;
	cout << " Segunda nota: ";
	cin >> B;
	cout << " Terceira nota: ";
	cin >> C;
	A = A * 2;
	B = B * 3;
	C = C * 5;
	
	media = (A + B + C)/ (2 + 3 + 5);
	cout << " MEDIA = " << media;
	 
	
	
	return 0;
}

