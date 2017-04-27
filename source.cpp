#include <ostendo.h>
#include <pessum.h>
#include "problems/problem_headers.hpp"

using namespace ostendo;

int main(int argc, char const* argv[]) {
  InitOstendo(true, 1);
  euler::ProblemSelection();
  TermOstendo();
  pessum::SaveLog("out.log");
  return 0;
}
