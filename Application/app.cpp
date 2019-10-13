#include "../Assembly/headers/B.hpp"
#include <iostream>
int main()
{
    TestProject::Assembly::B b;
    TestProject::Assembly::A a;
    std::cout<<"test started"<<std::endl;
    a.b=5;
    a.n=3;
    b.printA(&a);
    std::cout<<"test ended"<<std::endl;
    return  0;
}