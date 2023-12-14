#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;
int main(){
    int say=0, onluk;
    char ikilik[255];

    cout<<"Lutfen onluk tabandaki sayiyi girin:";
    cin>>onluk;

    if (onluk == 0){
        ikilik[0] = '0';
    }
    else{
        while (onluk > 0) {
            if ((onluk % 2) == 1) {
                ikilik[say++] = '1';
            } else {
                ikilik[say++] = '0';
            }

            onluk = onluk / 2;
        }
    }
    _strrev(ikilik);

    cout<<"Sonuc: "<<ikilik;

    getch();
    return 0;
}