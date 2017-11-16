//utility.cpp
#include <iostream>
#include <limits>
#include "utility.hpp"

namespace Utility
{
   int max_int() {
     return std::numeric_limits<int>::max();
   }

   int min_int() {
     return std::numeric_limits<int>::min();
   }

   void printmyMessage(std::string msg) {
     std::cout<<msg;
   }
}
