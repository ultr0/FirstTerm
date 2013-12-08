/*#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main ()
{
 int a,b,x;
 float y;
 //x=2;
 cout << "a=";
 cin >> a;
 cout << "b=";
 cin >> b;
// if (x-a<=0)
//  {
//     a=a*(-1);
//  }
 for (x=2; x<=8; x++)
 {
     y=(log(x-a)+b)/(cos(x));
     cout <<"x=" << x << " | y=" << y << endl;
 }
 /*do
 { y=(log(x-a)+b)/(cos(x));// y(x)=(ln(x-a)+b)/(cos(x)), x=2(1)8
 x=x+1;
 cout <<"x=" << x << " | y=" << y << endl;
}
 while (x<=7);
//getch();
return 0;
}
*/

