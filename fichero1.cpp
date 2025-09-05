#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
using std::ifstream;
using std::ofstream;

void lista();
void verprod();

int main(){
	verprod();
	system("PAUSE");
	return 0;
}

void lista(){
	
}

void verprod(){
	ifstream ver("ver.txt");
	string nombre,nomp[10];
	int precio,prec[10],i=0;
	
	while(!ver.eof()){
		cout<<ver.eof();
		ver>>nombre>>precio;
		nomp[i]=nombre;
		prec[i]=precio;
		i++;
		cout<<"producto: "<<nombre<<"  precio: "<<precio<<endl;
		
			}
		
		ver.close();
}
