#include <iostream>
using namespace std;

int main(){
	string nama,nim,asal,jur;
	
	cout <<"+-----------------+"<<endl;
	cout <<"|Biodata Mahasiswa|"<<endl;
	cout <<"+-----------------+"<<endl;
	cout <<"Nama    : ";
	getline(cin,nama);
	cout << endl;
	
	cout <<"Nim     : ";
	getline(cin,nim);
	cout << endl;
	
	cout <<"Jurusan : ";
	getline(cin,jur);
	cout << endl;
	
	cout <<"Asal    : ";
	cin >> asal; 
	

	cout <<"\n\nNama    : "<< nama;
	cout << endl;
	cout <<"NIM     : "<< nim;
	cout << endl;
	cout <<"Jurusan : "<< jur;
	cout << endl;
	cout <<"Asal    : "<< asal;
	
	}
