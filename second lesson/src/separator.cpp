#include <iostream>
#include <string>
#include "separator.h"

char Separator::Separat (std::string str) 
{
    char ch[str.length()] ;
    for(int i = 0; i <= str.length(); i++)
    {
        ch[i] = str[i];
    }
    return ch[str.length()];
}