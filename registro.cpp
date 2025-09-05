#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string>
using namespace std;
int i;
int reg(int i){
	int usu,cla;
	char vus[5],vcl[5];
	cout<<"Registrar"<<endl;
	cout<<""<<endl;
	cout<<"Digite su usuario"<<endl;
	cin>>vus[i];
	cout<<"digite su clave"<<endl;
	cin>>vcl[i];
	i=i+1;
	return i;
}









main(){
	int p,j,x,op;
	x=1;
	p=0;
	while(x!=0){
		cout<<"Que quieres hacer"<<endl;
		cout<<"Registrarse (1)"<<endl;
		cout<<"Login (2)"<<endl;
		cout<<"Salir (3)"<<endl;
		cin>>op;
			if(op<1 || op>3){
			cout<<"opcion no valida"<<endl;
			x=1;
		}
		else{
			switch (op){
				case 1:
					if(p==6){
						cout<<"No hay más cupos XD"<<endl;
					}
					else{
						i=reg(p);
					}
						
					break;
			}
		}
	}
}
