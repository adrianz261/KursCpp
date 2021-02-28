#include <string>

bool isPalindrome(const std::string & text)
{
  const size_t size_of_string = text.size() - 1;
  const size_t n = text.size() / 2;
  for (size_t i = 0; i < n; ++i)
  {
    if (text.at(i) != text.at(size_of_string - i))
    {
      return false;
    }
  }

  return true;
}