#include <iostream>

int main()
{
    //a const means that the varable cannot be changed (read only), it prevents the varable from chaning at all
    //lets make a script that finds the area of a circle.
    //lets make pi a constant, if we try to change it it will not work
    const double PI = 3.14;

    

    double raduis = 3;
    double circumfrance = 2 * PI * raduis;

    std::cout <<circumfrance <<std::endl;


    return 0;
}