#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char kata [20];
	
	cout<<"\t Program Membalik Kata \n\n";
	cout<<"Masukkan sebuah kata : ";
	cin>>kata;
	
	cout<<"\n Kata Setelah Dibalik : ";
	
	for (int i = strlen(kata)-1; i>=0; i--){
		cout<<kata[i]<<" ";
	}
	
	//return 0;
}
