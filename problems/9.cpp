#include <math.h>
#include <ostendo.h>
#include <fstream>
#include "9.hpp"

void euler::P_9() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Special Pythagorean triplet");
  win.ToggleBorder();
  win.Print(
      "#cThere exists exactly one Pythagorean triplet for which a + b + c = "
      "1000. Find the product abc.\n");
  long int prod = 0;
  for (int i = 2; i < 1000 && prod == 0; i++) {
    for (int j = 1; j < i && prod == 0; j++) {
      if (i * i + j * j == (1000 - i - j) * (1000 - i - j)) {
        prod = i * j * (1000 - i - j);
      }
    }
  }
  win.Print("#c%li", prod);
  while (getch() == ERR) {
  }
  win.DelWin();
}
