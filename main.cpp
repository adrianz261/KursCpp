#include <iostream>
#include "palindrom.h"


int main()
{
    const std::string text = "kaja";
    
    if (isPalindrome(text))
    {
        std::cout << text << " jest palindromem." << '\n';
    }
    else
    {
        std::cout << text << " nie jest palindromem." << '\n';
    }  
}