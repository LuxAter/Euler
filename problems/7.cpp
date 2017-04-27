#include <math.h>
#include <ostendo.h>
#include "7.hpp"

void euler::P_7() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("10001st Prime");
  win.ToggleBorder();
  win.Print(
      "#cFind the difference between the sum of the squares of the first one "
      "hundred natural numbers and the square of the sum.\n");
  int prime = 2;
  int count = 1;
  while (count < 10001) {
    prime++;
    bool is_prime = true;
    if (prime % 2 == 0) {
      is_prime = false;
    }
    for (int i = 3; i < sqrt(prime) + 1 && is_prime == true; i += 2) {
      if (prime % i == 0) {
        is_prime = false;
      }
    }
    if (is_prime == true) {
      count++;
    }
  }
  win.Print("#c%i", prime);
  while (getch() == ERR) {
  }
  win.DelWin();
}
