#include <ostendo.h>
#include "1.hpp"

void euler::P_1() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Problem 1");
  win.ToggleBorder();
  win.Print("#cFind the sum of all the multiples of 3 or 5 below 1000.\n");
  long int value = 0;
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      value += i;
    }
  }
  win.Print("#c%li", value);
  while (getch() == ERR) {
  }
  win.DelWin();
}
