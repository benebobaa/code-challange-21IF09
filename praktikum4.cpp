#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main () {
	string username,password,iuser,ipass;
	
	cout << " buat user naem dan password baru " << endl;
	cout << " masukan username : " ;
	cin >> username ;
	cout << " masukkan password : ";
	cin >> password ;
	
	cout << " username dan password berhasil dibuat "<< endl;
	
	cout << "login" << endl;
	cout << "masukan username : ";
	cin >> iuser;
	
	cout << "masukan pass : ";
	cin >> ipass;
	
	if ((iuser == username)&&(ipass == password)){
		cout << " login berhasil " <<endl;
	}else{
		cout << "login gagal " << endl;
	}
}
	
		
		
