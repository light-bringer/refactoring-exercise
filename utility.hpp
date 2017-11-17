// utility.hpp
namespace Utility
{
  template<typename T, int size>
  static int getArrLength(T(&)[size]){
    return size;
   }
}

namespace StrUtil {
  static std::string trim(const std::string & s);
  static std::string toTitleCase(const std::string & s);
  static std::string toUpperCase(const std::string & s);
  static std::string toLowerCase(const std::string & s);
  static bool startsWith(const std::string & s, const std::string & prefix);
  static bool endsWith(const std::string & s, const std::string & suffix);
  static bool isComment(const std::string & s);
}

namespace NumUtil {

    static int max_INT();
    static int min_INT();
}
