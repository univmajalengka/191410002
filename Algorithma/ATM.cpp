#include<iostream>
using namespace std;
int main()
{
	count<<"pilih menu"<<endl;
	count<<"1. tarik dana"<<endl;
	count<<"2. transfer dana"<<endl;
	count<<"3. lihat saldo"<<endl;
	count<<"masukan pilihan anda: ";
	
	int menu;
	cin>>menu;
	if (menu==1) {
		count<<"tarik dana";
	} else if (menu==2) {
		count<<"transfer dana";
	} else if (menu==3) {
		count<<"lihat saldo";
	} else {
		count<<"menu tidak ada";	
	}
	endl;
	}
