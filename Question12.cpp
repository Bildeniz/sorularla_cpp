#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main(){
    char sayi[255];
    int toplam=0, say=0,carpim=1;

    cout<<"ikilik sayi giriniz:";
    cin>>sayi;

    strcpy(sayi, strrev(sayi));

    while(sayi[say] != NULL){
        if(sayi[say] == '1'){
            toplam = toplam + carpim;

        }
        carpim = carpim * 2;
        say++;
    }
    cout<<"Sonuc: "<<toplam;
    return 0;
}