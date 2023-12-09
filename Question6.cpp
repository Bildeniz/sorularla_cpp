#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int toplam=0, sayi;

    do{
        cout<<"Lutfen bir sayi giriniz: ";
        cin>>sayi;

        if(((sayi>0) && (sayi % 2 != 0)) || ((sayi < 0) && (sayi % 2 == 0))){
            toplam += sayi;
        }
    }while(sayi!=0);


    cout<<"Toplam: "<<toplam;

    getch();
    return 0;
}