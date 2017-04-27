#include <math.h>
#include <ostendo.h>
#include <fstream>
#include "10.hpp"

void euler::P_10() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Summation of primes");
  win.ToggleBorder();
  win.Print("#cFind the sum of all the primes below two million.\n");
  long int sum = 0;
  int n = 2000000, tab[2000000] = {0};
  for (int i = 2; i <= sqrt(n); i++) {
    if (tab[i] == 0) {
      for (int j = 2; j < n; j++) {
        if (j % i == 0 && i != j) {
          tab[j] = 1;
        }
      }
    }
  }
  for (int i = 2; i <= 2000000; i++) {
    if (tab[i] == 0) {
      sum += i;
    }
  }
  win.Print("#c%li", sum);
  while (getch() == ERR) {
  }
  win.DelWin();
}
