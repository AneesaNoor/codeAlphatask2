#include <iostream>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int,int);

class game{
	public:
		string convert(string);
		void home();
		void play();
		void match(string[] ,int);
		void select_level();
		void help();
		void display_score();
		void level1();
		void level2();
		void level3();
		void level4();
		void level5();
		void level6();
		void level7();
		void level8();
		void level9();
		void level10();
		
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	system ("clolor e5");
	game g;
	g.home();
	return 0;
}
game obj1;
void game::home(){
	char str[]="GUESS-WORD GAME",str2[]="MADE WORDS OF ALPHABETS AND MADE SCORE";
	gotoxy(60,2);
	static int l=50;
	for(int i=0;str[i]!='\0';i++){
		for(double k=800000;k>=0;k--){	} 
		cout <<str[i];
		for(int i=0;str2[i]!='\0';i++){
			for(double k=800000;k>=0;k--){	}
			gotoxy(1,4);
			cout<<str2[i];
			l++;
		}
		char choice;
		while(1){
			cout<<"\n\n\t\t\t\t__";
			cout<<"\n\n\t\t\t\t|t\t1. play press 1for play "<<"\t|"
			<<"\n\n\t\t\t\t|\t\t2. Quiet \t Press 2 for Quiet "<<"\t|"
			<<"\n\n\t\t\t\t\t\t3. Select levels \t press 3 for levels "<<"\t|"
			<<"\n\n\t\t\t\t|\t\t4. help \t\t press 4 for help "<<"\t|"
			<<"\n\n\t\t\t\t|\t\t total levels are 10 "<<"\t\t\t\t\n|";
			cout<<"\n\n\n\t\t\t\tMake your own choice :"<<"\t\t\t\t";
			cout<<"\t\t\n\n\t\t\t\t__";
			gotoxy(76,19);
			cin>>choice;
			
			switch(choice){
				case '1':obj1.play();
				break;
				case '3':obj1.select_level();
				break;
				case '4':obj1.help();
				break;
				case '2':exit(0);
				break;
				default:
					cout<<"\n\n\t\t\t\tInvalid choice \n\n";
					system("PAUSE");
					system("cls");
		}
	}}
void game::select_level()
{
	system("cls");
	int str;
	cout<<"\n\n\t\t\t\tselect level (1-10) :";
	cin>>str;
	switch(str){
	//	calling functions
	case 1:level1(); break;
		case 2:level2(); break;
			case 3:level3(); break;
				case 4:level4(); break;
				case 5:level5(); break;
					case 6:level6(); break;
						case 7:level7(); break;
							case 8:level8(); break;
								case 9:level(); break;
									case 10:level10(); break;
									default :
										cout<<"\n\n\t\t\t\tInvalid choice \n\n";
										system("PAUSE");
										system(cls);
	}
}
void game::play(){
	obj1.level1();
}
class score:public game {
	int score;
	public:
		score(){
			score=0;
		}
void display_score(){
	score=score+20;
	gotoxy(0,2);
	cout<<"*";
	cout<<"\n\tAmazing                           *";
	cout<<"\n\t scoren: "<<score<<"\t     *"<<endl;
	cout<<"";
}
};
score ob;
void game::level1(){
	system(cls);
	int x=45,y=10,l1=0,z=0,dis=3;
	string str1="or";string str2="pro";string ch1;
	int j=1;
	bool found =false;
	string test1[2];
	while(1){
		cout<<"\n\t\t\t\t\tlevel 1 -> Make 2 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t r,o,p,\n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch1;
		string test_str=obj.convert(ch1);
		try{
			if(test_str==str1|| test_str==str2){
				test1[z]=test_str;
				ob.display_score();
				j++;
			}
			else if(j==2){
				for(int m=0;m<=z;m++){
					if(test1[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l1++;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test1[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test1,z);
				l1++;
				if(l1==2){
					gotoxy(0,5);
					cout<<"\n level1 cleared\n";
					system("PAUSE");
					level2;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! rnter again ....\n";
				l1--;
			}
		}
		catch(char *err){
			cout<<err;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
void game::level2(){
	system("cls");
	int x=45,y=10,l2=0,dis=3;
	strind str3="are"; string str4="era"; string str5="ear";string ch2;
	string tset2[10];
	int i=1,z=0;
	bool found =false;
	while(1){
	cout<<"	\n\t\t\t\t\t\\t\t\t\t\t\t Level 2 -> Make 3 combination \n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t  Given words \n";
	cout<<"\n\t\t\t\t\t\t\t\t r,e,a \n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t Make combination \n";
	gotoxy (x,y);
	cin>>ch2;
	string test_string =obj1.convert(ch2);
	try{
		if(test_str==str3||test_str==str4||test_str==str5){
			if(i==1){
				test2[z]=test_str;
				ob.display_score();
				i++;
			}
			else if(i==2){
				for(int m=0;m<=z;m++;) {
					if(test2[m]==test_str){
						found=true;
						break;
					}
					else{
						found=false;
					}
					if(found==true){
					cout<<"\n\t\t\t\t\ Repaeting \n";
					l2++;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test2[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test2,z);
				l2++;
				if(l2==3){
					gotoxy(0,5);
					cout<<"\nlevel 2 cleared \n";
					system("PAUSE");
					level3();
				}
			}
			else{
				throw "\n\t\t\t\t\t\t\t\tt\twrong! enter again ....\n";
				l2--;
			}
		}
		catch(char *e){
			cout<<e;
		}
		cout<<"\n\n\n\n\n\n\n\n\n\n";
		system("PAUSE");
		system("cls");
	}}
}
void game::level3(){
	system ("cls");
	int x=45;,y=10;l3=0;
	string str6="on"; string str7="no"; string str8="noon"; string ch3;
	int k=1;z=0;
	string test3[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 3 -> Make 3 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t o.n,o,n\n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch3;
		string test_str=obj.convert(ch3);
		try{
			if(test_str==str6|| test_str==str7||test_str==str8){
				if(k==1){
				
				test3[z]=test_str;
				ob.display_score();
				k++;
		}
			}
			else if(k==2){
				for(int m=0;m<=z;m++){
					if(test3[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l3++;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test3[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test3,z);
				l3++;
				if(l3==2){
					gotoxy(0,5);
					cout<<"\n level1 cleared\n";
					system("PAUSE");
					level3;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l3--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level4(){
	system ("cls");
	int x=45;,y=10;l4=0;
	string str9="ill"; string str10="lip"; string str11="pill"; string ch3;
	int i=1;z=0;
	string test4[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 4 -> Make 4 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t i,p,l,l \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch4;
		string test_str=obj.convert(ch4);
		try{
			if(test_str==str9|| test_str==str10||test_str==str11){
				if(i==1){
				
				test4[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test4[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l4--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test4[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test4,z);
				l4++;
				if(l4==2){
					gotoxy(0,5);
					cout<<"\n level4 cleared\n";
					system("PAUSE");
					level4;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l4--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level5(){
	system ("cls");
	int x=45;,y=10;l5=0;
	string str12="fee"; string str13="beef"; string str14="bee"; string str15="be";string ch5;
	int i=1;z=0;
	string test5[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 5 -> Make 5 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t e,e,b,f \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch5;
		string test_str=obj.convert(ch5);
		try{
			if(test_str==str12|| test_str==str13||test_str==str14||test_str=str15){
				if(i==1){
				
				test5[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test5[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l5--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test5[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test5,z);
				l5++;
				if(l5==2){
					gotoxy(0,5);
					cout<<"\n level 5 cleared\n";
					system("PAUSE");
					level5;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l5--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level6(){
	system ("cls");
	int x=45;,y=10;l6=0;
	string str16="low"; string str17="owl"; string str18="blow";  string str19="bowl"; string str20="bow";string ch6;
	int i=1;z=0;
	string test6[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 6 -> Make 6 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t b,o,w,l \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch6;
		string test_str=obj.convert(ch6);
		try{
			if(test_str==str16|| test_str==str17||test_str==str18||test_str=str19||test_str=str20){
				if(i==1){
				
				test6[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test6[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l6--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test6[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test6,z);
				l6++;
				if(l6==2){
					gotoxy(0,5);
					cout<<"\n level 6 cleared\n";
					system("PAUSE");
					level6;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l6--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level7(){
	system ("cls");
	int x=45;,y=10;l7=0;
	string str21="skin"; string str22="sin"; string str23="ink";  string str24="inks"; string str25="kins";string str26="ski";
	string str27 =" sink";string ch7;
	int i=1;z=0;
	string test7[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 7 -> Make 7 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t s,i,n,k \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch7;
		string test_str=obj.convert(ch7);
		try{
			if(test_str==str21|| test_str==str22||test_str==str23||test_str=str24||test_str=str25||test_str=str26||test_str=str27){
				if(i==1){
				
				test7[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test7[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l7--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test7[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test7,z);
				l7++;
				if(l7==2){
					gotoxy(0,5);
					cout<<"\n level 7 cleared\n";
					system("PAUSE");
					level7;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l7--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level8(){
	system ("cls");
	int x=45;,y=10;l8=0;
	string str28="bus"; string str29="sub"; string str30="busy";  string str31="buy"; string str32="buys";string str33="by"; string str34 =" bye";
	string ch8;
	int i=1;z=0;
	string test8[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 8 -> Make 8 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t b,u,y,s \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch8;
		string test_str=obj.convert(ch8);
		try{
			if(test_str==str28|| test_str==str29||test_str==str30||test_str=str31||test_str=str32||test_str=str33||test_str=str34){
				if(i==1){
				
				test8[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test8[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l8--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test8[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test8,z);
				l8++;
				if(l8==2){
					gotoxy(0,5);
					cout<<"\n level 8 cleared\n";
					system("PAUSE");
					level8;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l8--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level9(){
	system ("cls");
	int x=45;,y=10;l9=0;
	string str35="use"; string str36="sure"; string str37="rue";  string str38="us"; string str39="sue";string str40="re"; 
	string ch9;
	int i=1;z=0;
	string test9[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 9 -> Make 9 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t s,u,r,e \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch9;
		string test_str=obj.convert(ch9);
		try{
			if(test_str==str35|| test_str==str36||test_str==str37||test_str=str38||test_str=str39||test_str=str40){
				if(i==1){
				
				test9[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test9[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l9--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test9[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test9,z);
				l9++;
				if(l9==2){
					gotoxy(0,5);
					cout<<"\n level 9 cleared\n";
					system("PAUSE");
					level9;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l9--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void game::level10(){
	system ("cls");
	int x=45;,y=10;l10=0;
	string str41="hat"; string str42="tee"; string str43="ate";  string str44="at"; string str45="the";string str46="heat"; string str47="eat";
	string str48="hate";
	string ch10;
	int i=1;z=0;
	string test10[10];
		bool found =false;
	while(1){
		cout<<"\n\t\t\t\t\tlevel 10 -> Make 10 combinations \n";
		cout<<"\n\t\t\t\t\t Given words \n\n";
		cout<<<"\n\t\t\t\t a,t,e,h  \n";
		cout<<"\t\t\t\t\tMake combinations\n";
		gotoxy(x,y);
		cin>>ch10;
		string test_str=obj.convert(ch10);
		try{
			if(test_str==str41|| test_str==str42||test_str==str43||test_str=str44||test_str=str45||test_str=str46||test_str=str47||test_str=str48){
				if(i==1){
				
				test10[z]=test_str;
				ob.display_score();
				i++;
		}
			}
			else if(i==2){
				for(int m=0;m<=z;m++){
					if(test10[m]==test_str){
						found=true;
						break;
					}
					if(found==true){
						cout<<"\n\t\t\tRepeating\n";
						l10--;
					}
					else if(found==false){
						z++;
						gotoxy(100,dis);
						dis++;
						test10[z]=test_str;
						ob.display_score();
					}
				}
				obj1.match(test10,z);
				l10++;
				if(l10==2){
					gotoxy(0,5);
					cout<<"\n level 10 cleared\n";
					system("PAUSE");
					level10;
				}
			}
			else{
				throw"\n\t\t\t\t\t wrong! write again ....\n";
				l10--;
			}
		}
		catch(char *e){
			cout<<e;
		}
	cout<<"\n\n\n\n\n";
	system("cls");	
	}
	
}
}
void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void game::match(string test [],int z){
	gotoxy(96,1);
	cout<<"_";
	gotoxy(96,2);
	cout<<"MATCH WORDS .....\n";
	static int k=3;
	for(int i=0;i<=z;i++){
		gotoxy(96,k);
		cout<<"|\t"<<test[i];
		k++;
	}
	getch();
}
string game::convert(string ch){
	int len=ch.size();
	for(int l=0;l<=len;l++){
		if(ch[l]>=65&& ch[l]<=92){
			ch[l]=ch[l]+32;
		}
	}
	return ch;
}
void game::help(){
	system("cls");
	cout<<"\n\t\t\t\t\t1.FROM GIVEN ALPHABETS MAKE PROPER WORDS AND SCORE WILL BE INCREASED BY 20 ";
	COUT<<"\n\t\t\t\t\t2.BY SELECTING PLAY , YOU WILL BE PLAY LEVEL BY LEVEL ";
	cout<<"\n\n\t\t\t\t3. BY SELECTING LEVELS , YOU ARE ALLOWED TO PLAY DESIRED LEVEL \n\n";
	system("PAUSE");
	system("cls");
}

