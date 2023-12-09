#include <iostream>
using namespace std;

main(){
    int sayi, enb, sayac=1;
    cout<<"Lutfen "<<sayac<<". sayiyi girin:";
    cin>>sayi;
    enb=sayi;
    while(sayac<3){
        sayac++;
        cout<<"Lutfen "<<sayac<<". sayiyi girin:";
        cin>>sayi;
        if(sayi>enb) enb=sayi;
    }
    cout<<enb<<" En buyuk sayi";
}