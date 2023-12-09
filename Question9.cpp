#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    int x, basamak=0;
    double bolum;

    cout<<"Lutfen bir sayi girin:";
    cin>>x;
    bolum = x;

    do{
        bolum = bolum / 10;
        basamak++;
    }while(bolum > 1);

    cout<<basamak<<" Basamakli bir sayi";

    getch();
    return 0;
}