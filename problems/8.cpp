#include <math.h>
#include <ostendo.h>
#include <fstream>
#include <vector>
#include "8.hpp"

void euler::P_8() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Largest Product In A Series");
  win.ToggleBorder();
  win.Print(
      "#cFind the thirteen adjacent digits in the 1000-digit number that have "
      "the greatest product.\n");
  std::ifstream load("8.txt");
  std::string str = "";
  std::string line = "";
  if (load.is_open()) {
    while (getline(load, line)) {
      str += line;
    }
    load.close();
  } else {
    win.Print("#c#o10Could not open 8.txt#f10\n");
  }
  std::vector<long int> n;
  for (int i = 0; i < str.size(); i++) {
    n.push_back(int(str[i]) - 48);
  }
  long int prod = 0;
  for (int i = 0; i < n.size() - 12; i++) {
    long int tmp = 1;
    for (int j = 0; j < 13; j++) {
      tmp *= n[i + j];
    }
    if (tmp > prod) {
      prod = tmp;
    }
  }
  win.Print("#c%li", prod);
  while (getch() == ERR) {
  }
  win.DelWin();
}
