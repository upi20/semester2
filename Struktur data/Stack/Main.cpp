/*
Program stack (tumpukan) Dalam bahasa pemerograman c++
Tugas Mata kuliah Struktur data
Nama : Isep Lutpi Nur
NPM : 2113191079
*/

#include <iostream>
#include <conio.h>


using namespace std;
int n=3, top=-1;
int s[3];


void push();
void pop();
void print();
int menuUtama();

int main(){
	int pilihan = menuUtama();
	enum pilihan{pushStack = 1, popStack, printStack, exit};
	while(pilihan != exit){
		switch(pilihan){
			case pushStack:
				push();
				break;
			case popStack:
				pop();
				break;
			case printStack:
				print();
				break;
			default:
				cout << endl;
				cout << "Pilihan tidak ditemukan" << endl;
				break;
		}
		pilihan = menuUtama();
	}
	cout << "\nAkhir dari program";
	return 0;
}
void push(){
	int x;
	if( top == n-1 ){
		cout << endl;
		cout << "Stack Penuh" << endl;
		getch();
	}else{
		cout << endl;
		cout << "Push stack" << endl;
		cout << "Masukan data: ";
		cin >> x;
		top++;
		s[top] = x;
	}
}
void pop(){
	if(top <= -1){
   		cout << endl;
		cout << "Stack Kosong" << endl;
		getch();
	}else{
		cout << endl;
		cout << "Stack yang di pop adalah " <<  s[top] <<endl;
		top--;
		getch();
	}
}
void print(){
	if(top >= 0){
		cout << endl;
		cout << "Stack yang tersedia: | ";
	for(int i = 0; i <=top; i++){
		cout << s[i] << " | ";
		}
		cout << endl;
		getch();
	}else{
		cout << endl;
		cout << "Stack kosong" << endl;
		getch();
	}
}
int menuUtama(){
	system("cls");
	int input;
	cout << "Program stack" << endl;
	cout << "1. Push stack" << endl;
	cout << "2. Pop stack" << endl;
	cout << "3. Tampilkan stack" << endl;
	cout << "4. Keluar dari program" << endl;
	cout << "Pilih (1-4)? ";
	cin >> input;
	return input;
}
