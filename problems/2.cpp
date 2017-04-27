#include "2.hpp"
#include <ostendo.h>

void euler::P_2(){
  ostendo::Window win(0.5,0.5,0.25,0.25);
  win.ToggleTitle("Even Fibonacci Numbers");
  win.ToggleBorder();
  win.Print("#cBy Considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.\n");
  long int sum = 2;
  int a = 1, b = 1;
  while(a <= 4000000){
    if(a % 2 == 0){
      sum += a;
    }
    int c = a;
    a += b;
    b = c;
  }
  win.Print("#c%li", sum);
  while(getch() == ERR){
  }
  win.DelWin();
}
