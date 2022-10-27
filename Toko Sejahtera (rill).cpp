#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	// input nama, nim, absen, tugas, uts, dan uas, hitung menggunakan pengkondisian
	char nama[20], alamat[11], hp[11];
	float hb1, hb2, hb3, d;
	int bb1, bb2, bb3; 
	
	int jb, thsd, tb;
	
	
	cout<<"---------------------"<< endl <<endl;
	cout<<"Masukkan Nama = ";
		gets(nama);
	cout<<"Masukkan Alamat = ";
		gets(alamat);
	cout<<"Masukkan no hp = ";
		gets(hp);
	
	cout<<"Masukkan harga barang 1 = ";
		cin>>hb1;
	cout<<"Masukkan harga barang 2 = ";
		cin>>hb2;
	cout<<"Masukkan harga barang 3 = ";
		cin>>hb3;
		
	cout<<"Masukkan banyak barang 1 = ";
		cin>>bb1;
	cout<<"Masukkan banyak barang 2 = ";
		cin>>bb2;
	cout<<"Masukkan banyak barang 3 = ";
		cin>>bb3;	
		
	jb = bb1 + bb2 + bb3;	
	thsd = (hb1 * bb1) + (hb2 * bb2) + (hb3 * bb3);
	
	if(thsd <= 500000){
		d = 0.10;
	}	
	
	if(thsd >= 500000 && thsd <= 1000000){
		d = 0.15;
	}
	
	else if(thsd >= 1000000){
		d = 0.20;
	}
	
	tb = thsd - d;
	
	cout<<"===============HASIL================"<<endl;
	cout<<"Nama = "<<nama<<endl;
	cout<<"Alamat = "<<alamat<<endl;
	cout<<"No Hp = "<<hp<<endl;
	cout<<"Masukkan harga barang 1 = "<< hb1	<<endl;
	cout<<"Masukkan harga barang 2 = "<< hb2	<<endl;
	cout<<"Masukkan harga barang 3 = "<<hb3		<<endl << endl;
	
	
	cout<<"Masukkan banyak barang 1 = "<< bb1 <<endl;
	cout<<"Masukkan banyak barang 2 = "<< bb2 <<endl;
	cout<<"Masukkan banyak barang 3 = "<< bb3 <<endl;
	cout<<"================================"<< endl << endl;		
	cout<<" jumlah barang = "<< jb <<endl;
	cout<<"Total harga sebelum diskon= "<< thsd <<endl;
	cout<<"Diskon "<< d <<endl;
	cout<<"Total Bayar"<< tb <<endl;
	
	
}
