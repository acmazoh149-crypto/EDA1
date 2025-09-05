#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;
int v[2][2],a,i,x=0,y=0;
main(){
	srand(time(NULL));
	while(x<=2){
		while(y<=2){
			a=rand()%10+1;
			v[x][y]=a;
			y++;
		}
		x++;
		y=0;
	}
	for(x=0;x<3;x++){
		cout<<endl;"";
		for(y=0;y<3;y++){
		cout<<" "<<v[x][y];
	}
	}
}
