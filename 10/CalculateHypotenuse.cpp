#include <iostream>
#include <cmath>

int main()
{
    //var decor
    double a;
    double b;

    double c;

    std::cout<<"Side A: ";
    std::cin>> a;

    std::cout<<"Side B: ";
    std::cin>> b;

    
    c = sqrt(pow(b, 2)+pow(a, 2));
    std::cout<<" "<<std::endl;
    std::cout<<"Side C: "<< c <<std::endl;

    


    return 0;
}