#include <iostream>
using namespace std;

int main(){
	int jari2;
	int luas1, luas2, keliling1, keliling2;
	float pi;
	cout << "jari-jari = ";
	cin >> jari2;
	pi = 3.14;
	cout << "CONTOH RUMUS LUAS LINGKARAN" << endl;
    luas1 = pi * jari2;
    luas2 = luas1 * jari2;
    cout << "L = pi * jari-jari * jari-jari " << endl;
    cout << "  = " << pi << " * " << jari2 << " * " << jari2 << endl;
    cout << "  = " << luas1 << " * " << jari2 <<endl;
	cout << "  = " << luas2 << endl;
	cout << "======================================================="<< endl;
	cout << "CONTOH RUMUS KELILING LINGKARAN" << endl;
	keliling1 = 2 * pi;
	keliling2 = keliling1 * jari2;
	cout << "k = 2 * pi * jari-jari" << endl;
	cout << "  = 2 * " << pi << " * " << jari2 << endl;
	cout << "  = " << keliling1 << " * " << jari2 << endl;
	cout << "  = " << keliling2 << endl;
	return 0;
}