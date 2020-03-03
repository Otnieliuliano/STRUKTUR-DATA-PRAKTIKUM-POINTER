#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*b){

int y = 0;
for (;*b!='\0';b++)
++y;
return y;
}
main (void){
cout<<"Menghitung Banyaknya karakter"<<endl;
cout<<" Otniel Iuliano        "<<endl;
cout<<" 028              "<<endl;
cout<<" D4 MI A 19 "<<endl;
char String [100];
cout<<"Ketik Sesukamu      : ";
cin.getline(String,200);cout<<endl;
cout<<"  Hasilnya : "<<H(String)<<" Huruf "<<endl;
}
