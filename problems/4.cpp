#include <math.h>
#include <ostendo.h>
#include "4.hpp"

void euler::P_4() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Largest Palindrome Product");
  win.ToggleBorder();
  win.Print(
      "#cFind the largest palindrome made from the product of two 3-digit "
      "numbers.\n");
  int largest = 0;
  for (int a = 999; a >= 1; a--) {
    for (int b = 999; b >= 1; b--) {
      int prod = a * b;
      std::string str = std::to_string(prod);
      if (str == std::string(str.rbegin(), str.rend()) && prod > largest) {
        largest = prod;
      }
    }
  }
  win.Print("#c%i", largest);
  while (getch() == ERR) {
  }
  win.DelWin();
}
