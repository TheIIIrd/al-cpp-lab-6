#ifndef TIMEEXCEPTION_HPP_
#define TIMEEXCEPTION_HPP_

#include <iostream>
#include <stdexcept>

class Time {
private:
  int hours;
  int minutes;
  int seconds;

public:
  Time(int h, int m, int s); // Constructor declaration
  void printTime();
};

#endif
