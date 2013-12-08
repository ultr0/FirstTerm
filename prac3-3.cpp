/* /При вводе в строку цифры 0 выдается сообщение «Это 0, введите другую цифру». Ввод продолжается.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int c;
  cout << "Please, enter numbers:" << endl;
  do
  {
   X:c=getchar();
   if (c == '0') break;
   if (c == '.') goto STOP;
  }
  while (c != '.');
  cout << "Sorry! It's 0, please enter another number." << endl;
  goto X;
  STOP:
  return 0;
} */

/*{
    int i,A[100];s
    cout << "Please, enter numbers:" << endl;
    for (i=1; i<=100; i++)
    {
        X: cin >> A[i];
        if (A[i]==0) break;
    }
  cout << "Sorry! It's 0, please enter another number." << endl;
  goto X;
  return 0;
}
*/

/*{
 int i,ch;
 cout << "Please, enter numbers:" << endl;
 for(i=0; i<=100; i++)
 {
    X: cin >> ch;
     if (ch==0) break;
  }
 cout << "Sorry! It's 0, please enter another number." << endl;
 ch=1;
 goto X;
 return 0;
}*/

