#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    unsigned int PT=0, PA=0, NA=0;
    int NT=0, sayi;

    for(unsigned int sayac=0; sayac<50; sayac++){
        cout<<"Lutfen bir sayı giriniz:";
        cin>>sayi;

        if(sayi > 0){
            PT += sayi;
            PA++;
        }
        else if (sayi < 0){
            NT += sayi;
            NA++;
        }

    }
    if(NA==0){NA=1;}
    if(PA==0){PA=1;}
    cout<<"Pozitiflerin ortalamasi: "<<PT/PA<<"\nNegatiflerin ortalamasi: "<< NT/(int)NA;

    getch();
    return 0;
}