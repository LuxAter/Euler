#include <math.h>
#include <ostendo.h>
#include "6.hpp"

void euler::P_6() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Sum Square Difference");
  win.ToggleBorder();
  win.Print(
      "#cFind the difference between the sum of the squares of the first one "
      "hundred natural numbers and the square of the sum.\n");
  int soq = 0;
  for (int i = 1; i <= 100; i++) {
    soq += pow(i, 2);
  }
  int val = pow(100 * (100 + 1) / 2, 2) - soq;
  win.Print("#c%i", val);
  while (getch() == ERR) {
  }
  win.DelWin();
}
