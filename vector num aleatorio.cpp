#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;
int i,v[10],a;
main(){
	srand(time(NULL));
	while(i<10){
		
		a=rand()%31+10;
		v[i]=a;
		i++;
	}
	for(i=0;i<10;i++){
		cout<<"  "<<v[i]<<endl;
	}
}
