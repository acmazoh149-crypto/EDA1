#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;

int suma(int x, int y){
	int suma;
	suma=x+y;
	return suma;
}

int resta(int x, int y){
	int resta;
	resta=x+y;
	return resta;
}


int multi(int x, int y){
	int multi;
	multi=x+y;
	return multi;
}


int divi(int x, int y){
	int divi;
	divi=x+y;
	return divi;
}

main(){
	int j,r,t,op,opt;
	opt=1;
	while(opt!=0){
		system("color f0");
		cout<<"Bienvenido :.:"<<endl;
		cout<<""<<endl;
		cout<<"suma (1)"<<endl;
		cout<<"resta (2)"<<endl;
		cout<<"multiplicacion (3)"<<endl;
		cout<<"division (4)"<<endl;
		cout<<"salir (5)"<<endl;
		cin>>op;
		if(op<1 || op>5){
			cout<<"opcion no valida"<<endl;
			opt=1;
		}
		else{
			switch(op){
				case 1:
					cout<<"digite un numero"<<endl;
					cin>>r;
					cout<<"digite otro numero"<<endl;
					cin>>t;
					j=suma(r,t);
					cout<<""<<endl;
					cout<<"la suma es:";
					cout<<j<<endl;
						Sleep(1000);
					system("cls");
				break;
					case 2:
					cout<<"digite un numero"<<endl;
					cin>>r;
					cout<<"digite otro numero"<<endl;
					cin>>t;
					j=resta(r,t);
					cout<<""<<endl;
					cout<<"la resta es:";
					cout<<j<<endl;
						Sleep(1000);
					system("cls");
				break;
					case 3:
					cout<<"digite un numero"<<endl;
					cin>>r;
					cout<<"digite otro numero"<<endl;
					cin>>t;
					j=multi(r,t);
					cout<<""<<endl;
					cout<<"la multiplicacion es:";
					cout<<j<<endl;
						Sleep(1000);
					system("cls");
				break;
					case 4:
					cout<<"digite un numero"<<endl;
					cin>>r;
					cout<<"digite otro numero"<<endl;
					cin>>t;
					j=divi(r,t);
					cout<<""<<endl;
					cout<<"la division es:";
					cout<<j<<endl;
					Sleep(1000);
					system("cls");
				break;
				case 5:
						cout<<"chao! >_<"<<endl;
						Sleep(1000);
						opt=0;
						
					break;
			}
		}
	}
	

}
