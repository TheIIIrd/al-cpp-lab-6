#include "OutOfRangeException.hpp"

OutOfRangeException::OutOfRangeException(const Time &invalidTime)
    : std::out_of_range("Invalid Time"), invalidTime(invalidTime) {}

void OutOfRangeException::printDetails() {
  std::cout << "Invalid Time: ";
  invalidTime.printTime();
}
