#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    long int sayi;
    bool asal=true;
    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;


    if(sayi%2==1 & sayi >= 2){
        for(long int bolen=2; bolen<(sayi-1)/2; bolen++){
            if((bolen%2!=0) && ((sayi%bolen)==0)){
                asal=false;
                break;
            }
        }
    }
    else if(sayi != 2){
        asal = false;
    }

    if(asal & sayi > 0){cout<<"asaldir";}
    else if (sayi<0){cout<<"Sayi pozitif değil!";}
    else{cout<<"asal degildir";}

    getch();
    return 0;
}