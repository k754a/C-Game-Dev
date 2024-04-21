//Printing hello world. https://www.youtube.com/watch?v=-TkoO8Z07hI

//iostream contains fuctions for very very basic inputs and outputs
//it's like import UnityEngine;
#include <iostream>

//its basicly a void like public void test()
int main()
{
    // std means standered, C means character, while out means output, so std::cout is standered character output. << means output like unity's () then like Debug.Log("Hello world"); we dont end with a >>; just a ;

    std::cout <<"Hello World" <<std::endl;
    //intresting it adds lines together, not on seprate lines.
    //you can fix this by going << std::endl; this means standered end line.
    std::cout<<"This is a test";

    return 0;//this is helpful becase if it returns a 1 if there was a problem, but if it returns 0 that means there was no problem
}