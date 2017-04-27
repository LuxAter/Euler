#include "3.hpp"
#include <ostendo.h>
#include <math.h>

void euler::P_3(){
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Largest Prime Factor");
  win.ToggleBorder();
  win.Print("#cWhat is the largest prive factor fo the number 600851475143?\n");
  long int val = 600851475143;
  int sq = sqrt(val);
  int largest = 2;
  for(int i = 2; i < sq; i++){
    if(val % i == 0){
      val /= i;
      if(i > largest){
        largest = i;
      }
    }
  }
  win.Print("#c%i", largest);
  while(getch() == ERR){

  }
  win.DelWin();
}
