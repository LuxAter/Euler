#include <math.h>
#include <ostendo.h>
#include "5.hpp"

void euler::P_5() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Smallest Multiple");
  win.ToggleBorder();
  win.Print(
      "#cWhat is the smallest positive number that is evenly divisible by all "
      "of the numbers from 1 to 20?\n");
  int val = 0;
  int i = 20;
  while (val == 0) {
    bool divisible = true;
    for (int j = 2; j <= 20 && divisible == true; j++) {
      if (i % j != 0) {
        divisible = false;
      }
    }
    if (divisible == true) {
      val = i;
      break;
    }
    i += 20;
  }
  win.Print("#c%i", val);
  while (getch() == ERR) {
  }
  win.DelWin();
}
