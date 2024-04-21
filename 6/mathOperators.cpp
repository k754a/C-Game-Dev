#include <iostream>

int main()
{
    //arithmetic operators = return the result of - + * /

    int apples = 20; 
    //lets say i eat 10 apples

    apples = apples - 10;

    //lets say i get 1 more apple we can write it like this
    apples = apples +=1;
    //or
    apples+=1;

    //in loops we can use this
    apples++;

    //lets say i double my apples i can do this

    apples = apples * 2;

    //lets say i half the apples

    apples = apples / 2;

    //we can also do this

    apples*=2;
    
    apples/=2;
    


    std::cout << apples <<std::endl;



    return 0;
}