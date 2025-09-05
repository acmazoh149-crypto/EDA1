 #include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
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
 
 int i,j,a;
 main(){
 		a=0;
 		j=0;
 	while(i!=6){
 		a=3;
 		if(a=3){
 		gotoxy(1,1);cout<<"xxxxxxx";
 		a=0;
 		}
 		if(a==0){
		 j=j+1;
		 	if(j==10){
 				a=3;
 				j=0;
			 }
			 else{
			 
 			for(i=1;i<=100;i++){
 				Sleep(0.1);	
			 	system("cls");
 				
 				gotoxy(i,j);
 				cout<<"xxxxxxx";
			 }
			 system("cls");
			 a=1;}
		 }
 		if(a==1){
		 	i=100;
 			j=j+1;
 			gotoxy(i,j);cout<<"xxxxxxx";
 			if(j==10){
 				a=3;
 				j=0;
			 }
			 else{
		
 			for(i=100;i<=1;i--){
 					Sleep(10);	
			 	system("cls");
 				gotoxy(i,j);
 				cout<<"xxxxxxx";
			 }
			 a=0;	 }
		 }
 		
	 }	
 }
