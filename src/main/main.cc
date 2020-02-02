#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string str = "TEST", s = "test", uppercase = "EE599";
    char a = 'a';
    std::cout << solution.Swaps(str,0,1) << std::endl;
    solution.Reverses(s);
    std::cout << s << std::endl;
    std::cout <<solution.LowerCase(uppercase)<< std::endl;

    
    
    return EXIT_SUCCESS;
}