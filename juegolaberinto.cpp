#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string>
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
 
 int i,x,y,j,vid;
 char m;
 
 int mapa(){
 	 	
 	  //estructura exterior básica del juego:	 
 	  
 	 for(i=0;i<=110;i++){
	
 		gotoxy(i,0);      
		cout<<"-";
			
	 }

	for(i=0;i<=35;i++){	

 		gotoxy(0,i);
		 cout<<"|"<<endl;
	 } 
	 
	 for(i=0;i<=110;i++){
	
 		gotoxy(i,35);		
		cout<<"-";
			
	 }

	for(i=5;i<=35;i++){	

 		gotoxy(110,i);
		 cout<<"|"<<endl;	
	 
	 } 
	 gotoxy(112,2);
	 cout<<"SALIDA";
	 
	 //estructura interna del juego:
	 
	for(i=1;i<=8;i++){
		
		gotoxy(7,i);
		cout<<"/"<<endl;		//pared de daño
	} 
	 
	for(i=14;i<=34;i++){
		gotoxy(10,i);
		cout<<"|"<<endl;
	}
	
	for(i=10;i<=18;i++){
		gotoxy(i,14);
		cout<<"-";
	}
	for(i=4;i<=22;i++){
		gotoxy(18,i);		//pared de daño
		cout<<"/";
	} 
	for(i=18;i<=32;i++){
		gotoxy(i,4);
		cout<<"-";
	} 
	for(i=5;i<=10;i++){
		gotoxy(32,i);
		cout<<"|";
	}  
		for(i=32;i<=38;i++){
		gotoxy(i,10);
		cout<<"-";
	}  
		for(i=5;i<=9;i++){
		gotoxy(38,i);
		cout<<"|";
	}  
		for(i=38;i<=50;i++){
		gotoxy(i,4);
		cout<<"-";
	}  
	 	for(i=1;i<=3;i++){
		gotoxy(50,i);		//portal
		cout<<")";
	} 
	 	for(i=62;i<=72;i++){
		gotoxy(i,4);
		cout<<"-";
	} 
	 	for(i=96;i<=109;i++){
		gotoxy(i,4);
		cout<<"-";
	} 
		for(i=1;i<=16;i++){
		gotoxy(84,i);
		cout<<"|";
	} 
		for(i=5;i<=8;i++){
		gotoxy(62,i);
		cout<<"|";
	}  
	 	for(i=5;i<=10;i++){
		gotoxy(72,i);
		cout<<"|";
	} 
	for(i=8;i<=15;i++){
		gotoxy(46,i);
		cout<<"|";
	} 
		for(i=46;i<=62;i++){
		gotoxy(i,8);
		cout<<"-";
	}  
		for(i=32;i<=46;i++){
		gotoxy(i,15);
		cout<<"-";
	} 
	 	for(i=16;i<=17;i++){
		gotoxy(32,i);
		cout<<"|";
	} 		
		for(i=17;i<=22;i++){
		gotoxy(54,i);			//portal
		cout<<")";
	} 
	
		for(i=32;i<=54;i++){
		gotoxy(i,17);
		cout<<"-";
	} 
	for(i=18;i<=58;i++){
		gotoxy(i,22);
		cout<<"-";
	} 
	 	for(i=23;i<=34;i++){
		gotoxy(58,i);
		cout<<"|";
	} 
		for(i=18;i<=58;i++){
		gotoxy(i,32);
		cout<<"-";
	} 
		for(i=33;i<=34;i++){
		gotoxy(55,i);			//portal
		cout<<")";
	}  
		for(i=70;i<=84;i++){
		gotoxy(i,16);
		cout<<"-";
	}  
	 
		for(i=60;i<=72;i++){
		gotoxy(i,10);
		cout<<"-";
	}  
		for(i=11;i<=23;i++){
		gotoxy(60,i);
		cout<<"|";
	}  
	 	for(i=17;i<=18;i++){
		gotoxy(70,i);
		cout<<"|";
	} 
		for(i=70;i<=80;i++){
		gotoxy(i,18);
		cout<<"-";
	} 
		for(i=60;i<=70;i++){
		gotoxy(i,23);
		cout<<"-";
	} 
		for(i=19;i<=20;i++){
		gotoxy(80,i);
		cout<<"|";
	} 
		for(i=80;i<=96;i++){
		gotoxy(i,20);
		cout<<"-";
	} 
		for(i=5;i<=19;i++){
		gotoxy(96,i);
		cout<<"|";
	} 
		for(i=24;i<=30;i++){
		gotoxy(70,i);
		cout<<"|";
	} 
		for(i=80;i<=96;i++){
		gotoxy(i,25);
		cout<<"-";
	} 
		for(i=26;i<=32;i++){
		gotoxy(96,i);
		cout<<"|";
	} 
		for(i=90;i<=96;i++){
		gotoxy(i,32);
		cout<<"-";
	} 
		for(i=33;i<=34;i++){
		gotoxy(90,i);
		cout<<"|";
	} 
		for(i=33;i<=34;i++){
		gotoxy(92,i);			//portal
		cout<<"(";
	} 
		for(i=70;i<=84;i++){
		gotoxy(i,30);
		cout<<"-";
	} 
		for(i=29;i<=30;i++){
		gotoxy(60,i);			//portal
		cout<<"(";
	}  
		for(i=33;i<=34;i++){
		gotoxy(1,i);			//portal
		cout<<"(";
	}  
		for(i=27;i<=31;i++){
		gotoxy(18,i);			//pared de daño
		cout<<"/";
	} 
		for(i=18;i<=46;i++){
		gotoxy(i,27);
		cout<<"-";
	}  
		for(i=29;i<=30;i++){
		gotoxy(20,i);			//portal
		cout<<"(";
	} 
	for(i=17;i<=18;i++){
		gotoxy(83,i);			//portal
		cout<<"(";
	} 
		gotoxy(55,40);
		cout<<"VIDAS:"<<vid;
		gotoxy(12,6);
		cout<<"F"<<endl;
		gotoxy(25,29);
		cout<<"F"<<endl;
		gotoxy(100,30);
		cout<<"F"<<endl;
		gotoxy(88,32);
		cout<<"F"<<endl;
 }
 
 main(){
vid=3;	
x=2;
y=34;	 
j=1;	
while(j==1){
system("cls");
 	 mapa();
gotoxy(x,y);cout<<"P";
			m=getch();
			switch(m){
				case 'w':
					y--;
					if(y<=0){
						y=1;
					}
					for(i=32;i<=38;i++){
						if(x==i&&y==10){
						y=11;
						}
					}
					for(i=38;i<=50;i++){
						if(x==i&&y==4){
						y=5;
						}
					}
					for(i=18;i<=46;i++){
						if(x==i&&y==27){
						y=28;
						}
					}
					for(i=18;i<=58;i++){
						if(x==i&&y==31){
						y=32;
						}
					}
					for(i=18;i<=58;i++){
						if(x==i&&y==22){
						y=23;
						}
					}
					for(i=96;i<=109;i++){
						if(x==i&&y==4){
						x=5;
						}
					}
					for(i=32;i<=54;i++){
						if(x==i&&y==17){
						y=18;
						}
					}
					for(i=58;i<=72;i++){
						if(x==i&&y==10){
						y=11;
						}
					}
					for(i=70;i<=84;i++){
						if(x==i&&y==30){
						y=31;
						}
					}
					for(i=90;i<=96;i++){
						if(x==i&&y==32){
						y=33;
						}
					}
					for(i=80;i<=96;i++){
						if(x==i&&y==25){
						y=26;
						}
					}
					for(i=80;i<=96;i++){
						if(x==i&&y==20){
						y=21;
						}
					}
					for(i=80;i<=70;i++){
						if(x==i&&y==18){
						y=19;
						}
					}
					for(i=70;i<=84;i++){
						if(x==i&&y==16){
						y=17;
						}
					}
					if(x==12&&y==6){
						x=13;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==25&&y==29){
						x=24;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==100&&y==30){
						x=101;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==88&&y==32){
						x=31;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					break;
					
					
					
					
					
					
					
					
					
				case 'a':
					x--;
					if(x<=0){
						x=1;
					}
					for(i=1;i<=8;i++){
						if(x==7&&y==i){
						x=8;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
						}
					}
					for(i=4;i<=22;i++){
						if(x==18&&y==i){
						x=19;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
						}
					}
						for(i=14;i<=34;i++){
						if(x==10&&y==i){
						x=11;
						}
					}
						for(i=5;i<=10;i++){
						if(x==32&&y==i){
						x=33;
						}
					}
					for(i=5;i<=10;i++){
						if(x==38&&y==i){
						x=39;
						}
					}
						for(i=22;i<=35;i++){
						if(x==58&&y==i){
						x=59;
						}
					}
					for(i=1;i<=16;i++){
						if(x==84&&y==i){
						x=85;
						}
					}
					for(i=5;i<=10;i++){
						if(x==72&&y==i){
						x=73;
						}
					}
					for(i=10;i<=22;i++){
						if(x==60&&y==i){
						x=61;
						}
					}
					for(i=22;i<=30;i++){
						if(x==70&&y==i){
						x=71;
						}
					}
					for(i=32;i<=35;i++){
						if(x==90&&y==i){
						x=91;
						}
					}
					for(i=25;i<=32;i++){
						if(x==96&&y==i){
						x=97;
						}
					}
					for(i=4;i<=20;i++){
						if(x==96&&y==i){
						x=97;
						}
					}
					for(i=29;i<=30;i++){
						if(x==20&&y==i){
						y=18;
						x=53;
						}
					}
					for(i=33;i<=34;i++){
						if(x==1&&y==i){
						y=34;
						x=93;
						}
					}
					for(i=33;i<=34;i++){
						if(x==92&&y==i){
						y=34;
						x=2;
						}
					}
					for(i=17;i<=18;i++){
						if(x==83&&y==i){
						y=29;
						x=61;
						}
					}
					for(i=29;i<=30;i++){
						if(x==60&&y==i){
						y=18;
						x=84;
						}
					}
					if(x==12&&y==6){
						x=13;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==25&&y==29){
						x=24;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==100&&y==30){
						x=101;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==88&&y==32){
						x=31;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					break;
					
					
					
					
					
					
					
					
					
				case 's':
					y++;
					if(y>=35){
						y=34;
					}
					for(i=10;i<=18;i++){
						if(x==i&&y==14){
							y=13;
						}
					}
						for(i=10;i<=32;i++){
						if(x==i&&y==4){
						y=3;
						}
					}
					for(i=32;i<=38;i++){
						if(x==i&&y==10){
						y=9;
						}
					}
					for(i=38;i<=50;i++){
						if(x==i&&y==4){
						y=3;
						}
					}
					for(i=18;i<=46;i++){
						if(x==i&&y==27){
						y=26;
						}
					}
					for(i=18;i<=58;i++){
						if(x==i&&y==31){
						y=30;
						}
					}
					for(i=18;i<=58;i++){
						if(x==i&&y==22){
						y=21;
						}
					}
						for(i=62;i<=72;i++){
						if(x==i&&y==4){
						y=3;
						}
					}
					for(i=96;i<=109;i++){
						if(x==i&&y==4){
						x=3;
						}
					}
					for(i=46;i<=62;i++){
						if(x==i&&y==8){
						y=7;
						}
					}
					for(i=32;i<=46;i++){
						if(x==i&&y==15){
						y=14;
						}
					}
					for(i=60;i<=70;i++){
						if(x==i&&y==22){
						y=21;
						}
					}
					for(i=70;i<=84;i++){
						if(x==i&&y==30){
						y=29;
						}
					}
					for(i=90;i<=96;i++){
						if(x==i&&y==32){
						y=31;
						}
					}
						for(i=80;i<=96;i++){
						if(x==i&&y==25){
						y=24;
						}
					}
						for(i=80;i<=96;i++){
						if(x==i&&y==20){
						y=19;
						}
					}
					for(i=70;i<=84;i++){
						if(x==i&&y==16){
						y=15;
						}
					}
					if(x==12&&y==6){
						x=13;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==25&&y==29){
						x=24;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==100&&y==30){
						x=101;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==88&&y==32){
						x=31;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					break;
					
					
					
	
					
					
				case 'd':
					x++;
					if(x>=111){
						x=109;
					}
					for(i=14;i<=34;i++){
						if(x==10&&y==i){
						x=9;
						}
					}
					for(i=1;i<=8;i++){
						if(x==7&&y==i){
						x=6;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
						}
					}
						for(i=4;i<=22;i++){
						if(x==18&&y==i){
						x=17;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
						}
					}
					for(i=5;i<=10;i++){
						if(x==32&&y==i){
						x=31;
						}
					}
					for(i=5;i<=10;i++){
						if(x==38&&y==i){
						x=37;
						}
					}
						for(i=27;i<=31;i++){
						if(x==18&&y==i){
						x=17;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
						}
					}
					for(i=22;i<=35;i++){
						if(x==58&&y==i){
						x=57;
						}
					}
						for(i=4;i<=9;i++){
						if(x==62&&y==i){
						x=61;
						}
					}
						for(i=1;i<=16;i++){
						if(x==84&&y==i){
						x=83;
						}
					}
					for(i=8;i<=17;i++){
						if(x==46&&y==i){
						x=45;
						}
					}
					for(i=15;i<=17;i++){
						if(x==32&&y==i){
						x=31;
						}
					}
					for(i=22;i<=30;i++){
						if(x==70&&y==i){
						x=69;
						}
					}
					for(i=32;i<=35;i++){
						if(x==90&&y==i){
						x=89;
						}
					}
					for(i=25;i<=32;i++){
						if(x==96&&y==i){
						x=95;
						}
					}
					for(i=4;i<=20;i++){
						if(x==96&&y==i){
						x=95;
						}
					}
					for(i=18;i<=20;i++){
						if(x==80&&y==i){
						x=79;
						}
					}
					for(i=16;i<=18;i++){
						if(x==70&&y==i){
						x=69;
						}
					}
					for(i=1;i<=3;i++){
						if(x==50&&y==i){
						y=34;
						x=54;
						}
					}
					for(i=33;i<=34;i++){
						if(x==55&&y==i){
						y=2;
						x=49;
						}
					}
						for(i=18;i<=21;i++){
						if(x==54&&y==i){
						y=30;
						x=21;
						}
					}
					for(i=1;i<=4;i++){
						if(x==110&&y==i){
						system("cls");
						cout<<"GANASTE"<<endl;
						j=2;
						}
					}
					if(x==12&&y==6){
						x=13;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==25&&y==29){
						x=24;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==100&&y==30){
						x=101;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					if(x==88&&y==32){
						x=31;
						if(vid==0){
							j=2;
						}
						else{
						
						vid=vid-1;
						}
					}
					break;	
			}	

	}
}		
	 

