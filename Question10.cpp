#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int basamak_hesaplayici(int x){
    int basamak=0;
    double bolum;
    bolum = x;

    do{
        bolum = bolum / 10;
        basamak++;
    }while(bolum > 1);

    return basamak;
}


int main(){
    int sayi, basamak;
    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;

    basamak = basamak_hesaplayici(sayi);
    if(basamak > 5){
        cout<<"Lutfen en fazla 5 basamakli giriniz";
        exit(1);
    }

    cout<<sayi<<", "<<basamak<<" basamali bir sayi"<<endl;
    cout<<"Carpimlari"<<endl;
    for(int carpim=basamak-1; carpim>=0; carpim--){
        cout<<int(sayi/(pow(10, carpim)))<<"x"<<pow(10, carpim);
        sayi = fmod(sayi, pow(10, carpim));
        if(carpim != 0){
            cout<<"+"<<endl;
        }
    }
    getch();
    return 0;
}