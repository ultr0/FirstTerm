/*#include <iostream>
#include <math.h>

using namespace std;
int main()
{
int t,s;
float y;
cout << "Enter 't' = ";
cin >> t;
cout << "Enter 's' = ";
cin >> s;
s=abs(s); //Вычисляем модуль
switch(s)
{
case 1:
    y=log(s+1)+t;
case -1:
     y=log(s);
case 0:
     y=s+5;
}
/*if(s<1)
{
 y=log(s+1)+t;
}
if (s>1)
{
 y=log(s);
}
if (s==0);
{
 y=s+5;
}
cout << "y = " << y << endl;

return 0;
}


*/
