#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{

    //form
	int harga_pokok, harga_motor, cicilan, kredit, bunga, keuntungan, total;

	//form
	cout<<"Program Penghitung Kredit Motor \n"<<endl;

	cout <<"Harga Motor = "; cin >>harga_motor;

	cout <<"Lama Jangka Kredit (Bulan) = "; cin >>kredit;

	//logic
	harga_pokok=harga_motor/kredit;
	bunga=harga_pokok*0.1;
	cicilan=harga_pokok+bunga;
	total=cicilan*kredit;
	keuntungan=total-harga_motor;

	//result
	cout<<"Harga Pokok : Rp. "<<harga_motor/kredit<<endl;
	cout<<"Bunga Kredit : Rp. "<<harga_pokok*0.1<<endl;
	cout<<"Cicilan : Rp. "<<harga_pokok+bunga<<endl;
	cout<<"Total Harga Motor : Rp."<<cicilan*kredit<<endl;
	cout<<"Keuntungan Dealer : Rp."<<total-harga_motor<<endl;

	getch();
    return 0;
}
