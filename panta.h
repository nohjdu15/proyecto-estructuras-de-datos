#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

#define gt(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#define co cout<<
#define ci cin>>
#define parar gt(20,22);system("pause");


void panta1(){
system("cls");
system("color 9f");
gt(1,1);co char(201);
gt(80,1);co char(187);
gt(80,24);co char(188);
gt(1,24);co char(200);
for(int n85=2;n85<80;n85++){
gt(n85,1);co char(205);Sleep(2);
gt(n85,6);co char(205);
gt(n85,24);co char(205);
}
for(int n85=2;n85< 24; n85++){
gt(1,n85);co char(186);
gt(80,n85);co char(186);
}

gt(1,6);co char(204);
gt(80,6);co char(185);
gt(19.5,3);co "** UNIVERSIDAD COOPERATIVA DE COLOMBIA **";
gt(3,2); co __TIME__;
gt(68,2); co __DATE__;

}

void panta2(){
system("cls");
system("color f9");
gt(1,1);co char(201);
gt(80,1);co char(187);
gt(80,24);co char(188);
gt(1,24);co char(200);
for(int n85=2;n85<80;n85++){
gt(n85,1);co char(205);Sleep(2);
gt(n85,24);co char(205);
}
for(int n85=2;n85< 24; n85++){
gt(1,n85);co char(186);
gt(80,n85);co char(186);
}

gt(1,6);co char(204);
gt(80,6);co char(185);
gt(19.5,3);co "** UNIVERSIDAD COOPERATIVA DE COLOMBIA **";
gt(3,2); co __TIME__;
gt(68,2); co __DATE__;

}
