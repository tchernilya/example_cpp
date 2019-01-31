#include "counter.h"
#include <iostream>
#include <string>

// void Counter::count(int iter, void f(std::string)) сигнатура для функций в качестве параметров
 void Counter::count(int iter, std::string str)
{
        std::cout<<"You entered: "<<iter<<std::endl;
        std::cout<<"Your string will be output "<<iter<<"times"<<std::endl;
        for(int i = 0; i < iter; i++)
        {
            std::cout<<str<<std::endl;
        }  
}