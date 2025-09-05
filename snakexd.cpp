#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;
 
 void gotoxy(int x,int y)
{
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
 

int b,x,y,i,o,score;
char m;
int limite(){
				gotoxy(1,1);cout<<"----------------------------------------------------------------------------------------------------------------------";
			gotoxy(1,2);cout<<"|                                                                                                                    |";
    		gotoxy(1,3);cout<<"|                                                                                                  score="<<score<<"           |";
			gotoxy(1,4);cout<<"|                                                                                                                    |";
			gotoxy(1,5);cout<<"|                                                                                                                    |";
			gotoxy(1,6);cout<<"|                                                                                                                    |";
			gotoxy(1,7);cout<<"|                                                                                                                    |";
			gotoxy(1,8);cout<<"|                                                                                                                    |";
			gotoxy(1,9);cout<<"|                                                                                                                    |";
			gotoxy(1,10);cout<<"|                                                                                                                    |";
			gotoxy(1,11);cout<<"|                                                                                                                    |";
    		gotoxy(1,12);cout<<"|                                                                                                                    |";
			gotoxy(1,13);cout<<"|                                                                                                                    |";
			gotoxy(1,14);cout<<"|                                                                                                                    |";
			gotoxy(1,15);cout<<"|                                                                                                                    |";
			gotoxy(1,16);cout<<"|                                                                                                                    |";
			gotoxy(1,17);cout<<"|                                                                                                                    |";
			gotoxy(1,18);cout<<"|                                                                                                                    |";
			gotoxy(1,19);cout<<"|                                                                                                                    |";
			gotoxy(1,20);cout<<"|                                                                                                                    |";
    		gotoxy(1,21);cout<<"|                                                                                                                    |";
			gotoxy(1,22);cout<<"|                                                                                                                    |";
			gotoxy(1,23);cout<<"|                                                                                                                    |";
			gotoxy(1,24);cout<<"|                                                                                                                    |";
			gotoxy(1,25);cout<<"|                                                                                                                    |";
			gotoxy(1,26);cout<<"|                                                                                                                    |";
			gotoxy(1,27);cout<<"|                                                                                                                    |";
			gotoxy(1,28);cout<<"|                                                                                                                    |";
		gotoxy(1,29);cout<<"----------------------------------------------------------------------------------------------------------------------";
}
main(){
	srand(time(NULL));
	x=rand()%117-2;
	y=rand()%28-2;
	gotoxy(40,8);cout<<"---------------------------------------";
	gotoxy(40,9);cout<<"|                                     |";
    gotoxy(40,10);cout<<"|                                     |";
	gotoxy(40,11);cout<<"|                                     |";
	gotoxy(40,12);cout<<"|                                     |";
	gotoxy(40,13);cout<<"|                                     |";
	gotoxy(40,14);cout<<"|                                     |";
	gotoxy(40,15);cout<<"|                                     |";
	gotoxy(40,16);cout<<"|                                     |";
	gotoxy(40,17);cout<<"|                                     |";
	gotoxy(40,18);cout<<"---------------------------------------";
	gotoxy(48,15);cout<<"presione 1 para comenzar";  
		gotoxy(48,9);cout<<"los controles son:";
		gotoxy(46,10);cout<<"W-Arriba";
		gotoxy(46,11);cout<<"A-Izquierda";
		gotoxy(46,12);cout<<"D-Derecha";
		gotoxy(46,13);cout<<"S-Abajo";
		gotoxy(52,16);cout<<":";cin>>b;
		system("cls");
			i=rand()%117-2;
			o=rand()%28-2;
		
	while(b==1){
		
		limite();
		
		gotoxy(x,y);cout<<"S";
gotoxy(i,o);cout<<"O";
if(x==i&&y==o){
			i=rand()%117-2;
			o=rand()%28-2;
			score++;
}
			m=getch();
			switch(m){
				case 'w':
					y--;
					if(y<=1){
						y=2;
					}
					break;
				case 'a':
					x--;
					if(x<=1){
						x=2;
					}
					break;
				case 's':
					y++;
					if(y>=29){
						y=28;
					}
					break;
				case 'd':
					x++;
					if(x>=117){
						x=116;
					}
					break;	
			}	

	}
}
