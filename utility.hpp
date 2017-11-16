// utility.hpp

namespace Utility
{
  int max_int();
  int min_int();
  void printmyMessage(std::string msg);

  template<typename T, int size>
  inline int getArrLength(T(&)[size]){
    return size;
   }
}
