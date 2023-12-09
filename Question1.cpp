#include <iostream>
#include <conio.h>
using namespace std;

main() {
    int x,y;
    cout<<"Lutfen ekrana ilk sayiyi girin:";
    cin>>x;
    cout<<"Lutfen ikinci sayiyi girin:";
    cin>>y;
    if(x>y) {
        cout<<x<<" Daha buyuk";
    }
    else if(y>x) {
        cout<<y<<" Daha buyuk";
    }
    else{
        cout<<"iki sayi esit";
    }

    getch();
}
