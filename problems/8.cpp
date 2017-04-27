#include <math.h>
#include <ostendo.h>
#include "8.hpp"
#include <fstream>

void euler::P_8() {
  ostendo::Window win(0.5, 0.5, 0.25, 0.25);
  win.ToggleTitle("Largest Product In A Series");
  win.ToggleBorder();
  win.Print("#cFind the thirteen adjacent digits in the 1000-digit number that have the greatest product.\n");
  long int prod = 0;
  std::ifstream load("8.txt");
  std::string str = "";
  std::string line = "";
  if(load.is_open()){
    while(getline(load, line)){
      str += line;
    }
    load.close();
  }else{
    win.Print("#c#o10Could not open 8.txt#f10\n");
  }
  int n[1000];
  for(int i = 0; i < str.size(); i++){
    n[i] = int(str[i]) - 48;
  }
  for(int i = 0; i < 1000 - 13; i++){
    long int tmp = n[i];
    for(int j = 1; j < 13; j++){
      tmp = tmp * n[i+j];
    }
    if(tmp > prod){
      prod = tmp;
    }
  }
  win.Print("#c%i", prod);
  while (getch() == ERR) {
  }
  win.DelWin();
}

