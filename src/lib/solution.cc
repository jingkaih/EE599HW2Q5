#include "solution.h"


std::string Solution::Swaps(std::string str, int i, int j)
{
  char temp;
  temp = str[i];
  str[i] = str[j];
  str[j] = temp;
  return str;
}

void Solution::Reverses(std::string &str)
{
  for(int i = 0; i < 0.5 * (str.size() - 1); i++)
  {
    char temp = str[i];
    str[i] = str[str.size()-1-i];
    str[str.size()-1-i] = temp;
  }
}

std::string Solution::LowerCase(std::string str)
{
  for(int i = 0; i < str.size(); ++i)//statement for(auto x : str) didn't work in this case. Haven't figured out yet.
  {
    if(str[i] <= 90 && str[i] >= 65)
    {
      str[i] = str[i] + 32;
    }
  }
  return str;
}