#include "TimeException.hpp"
#include "OutOfRangeException.hpp"

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
  if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 ||
      seconds > 59) {
    throw OutOfRangeException(*this);
  }
}

void Time::printTime() {
  std::cout << "Time: " << hours << ":" << minutes << ":" << seconds
            << std::endl;
}
