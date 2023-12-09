#include<iostream>
#include<conio.h>
using namespace std;

main(){
    int x,y,z;
    cout<<"Lutfen ilk sayiyi girin:";
    cin>>x;
    cout<<"Lutfen ikinci sayiyi girin:";
    cin>>y;
    cout<<"Lutfen ucuncu sayiyi girin:";
    cin>>z;

    if(x>y and x>z){
        cout<<x<<" daha buyuk";
    }
    else if(y>z and y>x){
        cout<<y<<" daha buyuk";
    }
    else if(z>y and z>x){
        cout<<z<<" daha buyuk";
    }
    else{
        cout<<"Girdiginiz sayilar esit";
    }

    getch();
}