#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main (){
	float tinggi, alas;
	cout<< " Program Menghitung Segitiga"<<endl;
	cout<<"\n";

	cout << " Masukkan Tinggi : ";
	cin >> tinggi;
	cout << " Masukkan Alas : ";
	cin >> alas;

	cout << " Sisi Miring = "<<sqrt(alas*alas*tinggi*tinggi)<<endl;
	cout << " Luas = "<<0.5*alas*tinggi<<endl;
	cout << " Keliling = "<<tinggi+alas+sqrt(alas*alas*tinggi*tinggi)<<endl;

	return 0;
}
