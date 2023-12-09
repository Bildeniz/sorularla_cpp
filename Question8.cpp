#include <iostream>
#include <conio.h>
using namespace std;
 
int main(){
	int liste[10] = {-3, 15, 2, 3, 9, 4, 85, 54, 63, 12};
	/*
	int *dizi= new dizi[]
	*/
 
	for (int i=0; i < 10; i++) {
 
		for(int s=0; s<10; s++){
			if (liste[i]>liste[s]){
				int temp = liste[i];
				liste[i] = liste[s];
				liste[s] = temp;
 
			}
 
 
		}
	}
 
	for (int i = 0; i < 10; i++) {
		cout<<liste[i]<<"\n";
	}
	getch();
}
