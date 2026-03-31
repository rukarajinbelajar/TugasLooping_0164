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
    i++;
}
return true;
}

//fungsi cek bonacci
bool cekFibonacci(int n){
    int a = 0;
    int b = 1;
    int c = 2;

    while(c<n){
        c = a + b;
        a = b;
        b = c;
    }

        if(c==n || n==0)
            return true;
        else
            return false;
}

//prosedur menu
void menu(){
    cout<<"\n===MENU PROGRAM==="<<endl;
    cout<<"1. Cek Bilangan Prima"<<endl;
    cout<<"2. Cek Bilangan Fibonacci"<<endl;
    cout<<"0. keluar"<<endl;
}
