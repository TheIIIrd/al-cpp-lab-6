#ifndef OUTOFRANGEEXCEPTION_HPP_
#define OUTOFRANGEEXCEPTION_HPP_

#include "TimeException.hpp"

class OutOfRangeException : public std::out_of_range {
private:
  Time invalidTime;

public:
  OutOfRangeException(const Time &invalidTime);
  void printDetails();
};

#endif
