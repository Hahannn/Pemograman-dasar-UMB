#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	// input nama, nim, absen, tugas, uts, dan uas, hitung menggunakan pengkondisian
	char nama[30], nim[11];
	float absen, tugas, uts, uas, nilai_akhir;
	 
	
	cout<<"Masukkan Nama Anda = ";
	gets(nama);
	cout<<"Masukkan NIM Anda = ";
	gets(nim);
	cout<<"Masukkan Absen = ";
	cin>>absen;
	cout<<"Masukkan Nilai Tugas = ";
	cin>>tugas;
	cout<<"Masukkan NIlai Uts = ";
	cin>>uts;
	cout<<"Masukkan Nilai Uas = ";
	cin>>uas;
	
	nilai_akhir = absen*0.1 + tugas*0.3 + uts*0.3 + uas*0.3;
	
	cout<<"===============HASIL================"<<endl;

	cout<<"Nama = "<<nama<<endl;
	cout<<"NIM = "<<nim<<endl;
	cout<<"Absen = "<<absen<<endl;
	cout<<"Nilai Tugas = "<<tugas<<endl;
	cout<<"Nilai Uts = "<<uts<<endl;
	cout<<"Nilai Uas = "<<uas<<endl;
	cout<<"Nilai Akhir = "<<nilai_akhir<<endl;
	
	if(nilai_akhir >= 80 && nilai_akhir <= 100){
		cout<<"Grade A"<< endl;
	}	
	if(nilai_akhir >= 75 && nilai_akhir <= 79.99){
		cout<<"Grade B"<< endl;
	}
	if(nilai_akhir >= 65 && nilai_akhir <= 74.99){
		cout<<"Grade C"<< endl;
	}
	
	else if(nilai_akhir < 65){
		cout<<"Grade D"<< endl;
	}


}
