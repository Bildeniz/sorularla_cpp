#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int CT=0, TT=0, CA=0, TA=0, sayi;

    for(unsigned int sayac=0; sayac<50; sayac++){
        cout<<"Lutfen bir sayı giriniz:";
        cin>>sayi;

        if((sayi % 2)==0){
            CT += sayi;
            CA++;
        }
        else{
            TT += sayi;
            TA++;
        }

    }
    if(CA==0){CA=1;}
    if(TA==0){TA=1;}
    cout<<"Cift sayilarin ortalamasi: "<<CT/CA<<"\nTek sayilarin ortalamasi: "<< TT/TA;

    getch();
    return 0;
}