#include <iostream>
using namespace std;

int main(){
	int panjang, lebar, tinggi;
	int hitung1, hitung2;
	cout << "panjang = ";
	cin >> panjang;
	cout << "lebar = ";
	cin >> lebar;
	cout << "tinggi = ";
	cin >> tinggi;
	hitung1 = panjang * lebar;
    hitung2 = hitung1 * tinggi;
    cout << "L = p * l * t " << endl;
    cout << "  = " << panjang << " * " << lebar << " * " << tinggi << endl;
    cout << "  = " << hitung1 << " * " << tinggi <<endl;
	cout << "  = " << hitung2 << endl;
	return 0;
}