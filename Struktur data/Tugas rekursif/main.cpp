#include <iostream>
using namespace std;

int perkalian(int a, int b){
	if (b <= 1) {
		return a;
	} else {
		return a + perkalian(a, (b-1));
	}
}


int main(){
	int hasil, a, b;
	cout << "Program sederhana operasi perkalian" << endl;
	cout << "Mengunakan metode rekursif" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Masukan bilangan pertama: ";
	cin >> a;
	cout << "Masukan bilangan kedua  : ";
	cin >> b;
	hasil = perkalian(a, b);
	cout << "Hasil rekursif dari: " << hasil;
	return 0;
}
