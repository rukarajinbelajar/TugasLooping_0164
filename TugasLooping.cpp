#include <iostream>
using namespace std;

//deklarasi variabel global
int n;
int pilihan;
bool hasil;

//fungsi cek bilangan prima
bool cekPrima(int x) {
    if (x <= 1) return false;

    int i = 2;
    while (i < x) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

//fungsi cek bonacci
bool cekFibonacci(int x){
    int a = 0,b = 1,c;

    while(a<=x){
        if(a==x){
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
            return false;
}

//prosedur input angka
void input(){
    cout<<"Masukkan angka : ";
    cin>>n;
}

//prosedur output
void outputPrima(){
    if(cekPrima(n)){
        cout<<n <<" adalah Bilangan Prima"<<endl;
    }
    else{
        cout<<n <<" bukan Bilangan Prima"<<endl;
    }
}

void outputFibonacci(){
    if (cekFibonacci(n)){
        cout<<n <<" termasuk deret Fibonacci"<<endl;
    }
    else{
        cout<<n <<" bukan termasuk bilangan Fibonacci"<<endl;
    }
}

//prosedur menu
void menu(){
    cout<<"\n===MENU PROGRAM==="<<endl;
    cout<<"1. Cek Bilangan Prima"<<endl;
    cout<<"2. Cek Bilangan Fibonacci"<<endl;
    cout<<"0. keluar"<<endl;
    cout<<"Pilih Menu = ";
    cin>>pilihan;
}

//program utama
int main(){
    while(true){
        menu();
        
        switch(pilihan){
        case 1:
            input();
            outputPrima();
            break;
        
        case 2:
            input();
            outputFibonacci();
            break;

        case 0:
            cout<<"Program Selesai\n";
            return 0;

        default:
            cout<<"Pilihan Tidak Valid!\n";
        }
    }
}