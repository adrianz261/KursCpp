#include <iostream>
#include "palindrom.h"


int main()
{
    const std::string text = "a";
    
    if (isPalindrome(text))
    {
        std::cout << text << " jest palindromem." << '\n';
    }
    else
    {
        std::cout << text << " nie jest palindromem." << '\n';
    }  
}