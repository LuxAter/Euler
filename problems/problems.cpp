#include <ostendo.h>
#include <pessum.h>
#include <map>
#include <string>
#include <vector>
#include "problem_headers.hpp"
#include "problems.hpp"

void euler::ProblemSelection() {
  std::map<std::string, void (*)()> problems;
  problems["#1: Multiples of 3 and 5"] = P_1;
  problems["#2: Even Fibonacci Numbers"] = P_2;
  problems["#3: Largest Prime Factor"] = P_3;
  problems["#4: Largest Palindrome Product"] = P_4;
  problems["#5: Smallest Multiple"] = P_5;
  problems["#6: Sum Square Difference"] = P_6;
  problems["#7: 10001st Prime"] = P_7;
  problems["#8: Largest Product in a Series"] = P_3;
  problems["#9: Special Pythagorean Triplet"] = P_3;
  problems["#10: Summation of Primes"] = P_3;
  std::vector<std::string> options;
  for (std::map<std::string, void (*)()>::iterator it = problems.begin();
       it != problems.end(); ++it) {
    options.push_back(it->first);
  }
  options.push_back("Quit");
  std::string input = "";
  while (input != "Quit") {
    ostendo::Window win(0.75, 0.5, 0.125, 0.25);
    win.ToggleBorder();
    win.ToggleTitle("Problems");
    input = ostendo::Menu(win, options);
    win.DelWin();
    std::map<std::string, void (*)()>::iterator it = problems.find(input);
    if (it != problems.end()) {
      it->second();
    }
  }
}
