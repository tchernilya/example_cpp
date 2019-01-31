#include <iostream>
#include <string>
#include "src/counter.h"
#include "src/separator.h"

int main (int argc, char *argv[]) 
    {   
       
        int ctr;
        std::string answ;

        std::cout<<"Input something"<<std::endl;
        std::cin>>answ;
        std::cout<<"How many times do you want output "<<answ<<std::endl;
        std::cin>>ctr;

       Counter::count(ctr, answ); 
       
       system("pause"); 
        return 0;
    } 