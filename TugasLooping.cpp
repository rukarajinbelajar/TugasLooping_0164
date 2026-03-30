#include <iostream>
using namespace std;

//deklarasi variabel global
int angka;
int pilihan;
bool hasil;

//prosedur input angka
void input(){
    cout<<"Masukkan angka = ";
    cin>>angka;
}

//fungsi cek bilangan prima
bool cekPrima(int n){
    if(n<=1){
        return false;
    }

int i = 2;
while(i < n){
    if (n%i==0){
        return false;
    }
}
}