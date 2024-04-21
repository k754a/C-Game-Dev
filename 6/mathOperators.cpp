#include <iostream>

int main()
{
    //arithmetic operators = return the result of - + * /

    int apples = 20; 


    //double apples = 20;
    //lets say i eat 10 apples

    apples = apples - 10;

    //lets say i get 1 more apple we can write it like this
    apples = apples +=1;
    //or
    apples+=1;

    //in loops we can use this
    apples++;
    //or this
    apples--;

    //we cannot do 
    //apples**;
    //or
    //apples//;

    //lets say i double my apples i can do this

    apples = apples * 2;

    //lets say i half the apples

    apples = apples / 2;

    //we can also do this

    apples*=2;

    apples/=11;
    

    //we need to remeber becase we are using a int, we cannot get decimals, it will just remove them.

    //we can use a double to fix that though.

    //we can use a remainder:
    int remainder = apples % 3; //only works with ints i think

    //basicly we want to see if we can devide evenly and see what the remander is, so 13 /2 would have a remainder of 1 while 12/2 would be a remainder of 0, its good to use if you need to see if something is even or odd.
    //it uses bedmas: brackets and * and / then + and -

    



    std::cout << remainder <<std::endl;



    return 0;
}