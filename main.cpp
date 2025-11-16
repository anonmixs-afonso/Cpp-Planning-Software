#include "wtr.h"
#include <iostream>

int main()
{
  int choose_format {};

  std::cout << "Welcome to WTR (Week Tasks Record).\n";
  std::cout << "Do you wanna set random tasks by day or by day and time (hour)?\n"
  << "1- random, 2- day and hour: ";
  std::cin >> choose_format;

  if (choose_format == 1)
  {
    wtr_set_random();
  }

  else
  {
    wtr_set();
  }

  return 0;
}
