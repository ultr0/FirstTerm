//Написать функцию, которая заключает каждую пару символов в круглые скобки. Обработать две строки.
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
   string line1;
   string line2;
   //int b;
   cout<<"Enter line"<<endl;
   cin >> line1 >> line2;
   for(int i=1; i<line1.length();i=i+2)
   {

       cout << "(" << line1[i-1] << line1[i] << ")";
   }
   cout << endl;
   for(int i=1; i<line2.length();i=i+2)
   {

       cout << "(" << line2[i-1] << line2[i] << ")";
   }

   //getch();
}
