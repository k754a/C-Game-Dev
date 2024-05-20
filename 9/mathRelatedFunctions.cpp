#include <iostream>

//more math related functions are in the cmath funtions
#include <cmath>

int main()
{
    //var dec
    double x = 3;
    double y = 4;
    double z;


    //gets the largest value out of 2 varables, std::min does the opposite where it gets the smallest value out of 2 vars.
    z = std::max(x,y);

    //z = power, so 2 to the power of 3 == 8 (2*2*2)
    z = pow(2, 3);
    //square root (sqrt)

    z=sqrt(4);

    //absolute value (abs), its how far away the number is from 0, eather positive or negitive so like -3 is 3 away from 0
    z=abs(-5);

    //round rounds (3.14 = 3)
    z = round(1.5869948577);


    //ceil rounds up, no mater the value
    z = ceil(1.3);

    //floor rounds down, no mater the value
    z = floor(1.8);

    std::cout<<z<<std::endl;

    return 0;
}