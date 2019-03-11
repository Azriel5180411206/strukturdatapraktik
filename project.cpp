#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
int cari,a=1;
int max;
struct mhs
{
int nim;
string nama,jk,jrs;
int nh1,nh2,nh3;
float rata;
}maha[5];


void input_maha(mhs){


    for(int i=1;i<6;i++){
        cout<< "======================"<<endl;
        cout<<"Data Mahasiswa ke "<<i<<endl;
        cout<<"======================"<<endl;
cout<<"Masukan Nim = ";cin>>maha[a].nim;
cout<<"Masukan Nama = ";cin>>maha[a].nama;
cout<<"Jenis Kelamin = ";cin>>maha[a].jk;
cout<<"Jurusan = ";cin>>maha[a].jrs;
cout<<"Nilai Harian ke-1 =";cin>>maha[a].nh1;
cout<<"Nilai Harian ke-2 =";cin>>maha[a].nh2;
cout<<"Nilai Harian ke-3 =";cin>>maha[a].nh3;
maha[a].rata=(maha[a].nh1+maha[a].nh2+maha[a].nh3)/3;
cout<<"Rata-Rata = "<<maha[a].rata<<endl;

}
}
void maks_maha(mhs)
{
int maks;
cout<<"======================"<<endl;
cout<<"Tampil Rata-Rata tertinggi "<<endl;
   if(maks=1)
   maks = maha[a].rata;
cout<<"rata-rata tertinggi adalah : "<<maks<<endl;
cout<<"======================"<<endl;

}
void cari_maha(mhs){
bool ada=false;
cout<<"Masukan Nim yang akan dicari = ";cin>>cari;
if(ada=1){
    cout<<"Nim "<<cari<<" Ditemukan"<<endl;
    }else{cout<<"Nim tidak ditemukan / Belum Terdaftar"<<endl;}
}
int main(){
int pilih=0,b=1;
do{
cout<<"========MENU========="<<endl;
cout<<"1. Input Data Mahasiswa"<<endl;
cout<<"2. Tampilkan Nilai Tertinggi"<<endl;
cout<<"3. Cari Mahasiswa(NIM)"<<endl;
cout<<"0. Keluar"<<endl;
cout<<"Pilih Menu =";cin>>pilih;

switch(pilih){
    case 1:{if(b==5){cout<<"Space Penuh"<<endl;}else{input_maha(maha[5]);};break;}
    case 2:{if(b==5){cout<<"Input Tidak ada"<<endl;}else{maks_maha(maha[5]);};break;}
    case 3:{if(b==5){cout<<"input salah"<<endl;}else{cari_maha(maha[5]);};break;}
    case 0: cout<<"Terimakasih";break;
    default : cout<<"Masukan Salah"<<endl;
}}
while(pilih!=0);

}
