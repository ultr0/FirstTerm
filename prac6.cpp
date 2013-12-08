//План выпуска учебно-методической документации
//------------------------------------------------------------------------------------------------
//| № п/п | Наим. мероприятия | Объем в листах | Тираж в экземплярах | Дата |
//------------------------------------------------------------------------------------------------
/*#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
string space(int max, int now){
    string a;
    a.clear();
    for(int i=0; i<(max-now); i++){
        a.append(" ");

    }
    return a;
}

void main(){
struct table{
    int number;
    string event;
    string volume;
    int circulation;
    string date;
};
int count=0,back_circulation,flag_circ=0;
int l_e=10,l_v=13,l_c=21,l_d=4;
string backup;
char accept=NULL;
table UMD[100];
cout << " Welcome to plan of educational and methodical documentation!" << endl;
cout << " Please, enter the data." << endl;
Sleep(200);
while(accept != 'n'){
UMD[count].number = count+1;
cout << endl << "Enter name of the event: ";
cin >> UMD[count].event;
cout << "Enter volume sheets: ";
cin >> UMD[count].volume;
cout << "Enter circulation in copies: ";
cin >> UMD[count].circulation;
cout << "Enter date: ";
cin >> UMD[count].date;
backup.clear();

backup.append(UMD[count].event);
l_e=max(l_e,UMD[count].event.length());
backup.append(UMD[count].volume);
l_v=max(l_v,UMD[count].volume.length());
backup.append(UMD[count].date);

back_circulation = UMD[count].circulation;
flag_circ=0;
while(back_circulation!=0){
    back_circulation=back_circulation / 10;
    flag_circ++;
}
l_d=max(l_d,flag_circ);
count++;
cout << endl << "You want to add more date? (y)es/(n)o "<< endl;
cin >> accept;
}
//cout << endl << "Please wait..." << endl;
//Sleep(1000);
cout << endl << endl;
string lenint;
lenint =  "| N | Event name" + space((l_e-10),0) + " | Volume sheets" + space((l_v-13),0) + " | Circulation in copies" + space((l_c-21),0) + " | Date" + space((l_d),0) + " |";

for(int i=0; i<(lenint.length()); i++){
    cout << "-";
}
cout << endl << lenint;


for (int i=0; i<count; i++){
    back_circulation = UMD[i].circulation;
flag_circ=0;
while(back_circulation!=0){
    back_circulation=back_circulation / 10;
    flag_circ++;
}
cout << endl;
for(int i=0; i<(lenint.length()); i++){
    cout << "-";
}
cout  << endl <<  "|" << " " << UMD[i].number << " | " << UMD[i].event << space(l_e,UMD[i].event.length()) << " | " << space((l_v/1.5),UMD[i].volume.length()) << UMD[i].volume << space((l_v/1.5),UMD[i].volume.length()) << " | " << space((l_c/2),flag_circ) << UMD[i].circulation << space((l_c/2),flag_circ) <<" | " << UMD[i].date << space(l_d,UMD[i].date.length()-5) <<"|";
}
cout << endl;

for(int i=0; i<(lenint.length()); i++){
    cout << "-";
}
//_getch();
}
*/
