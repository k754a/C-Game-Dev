#include <iostream>

//make sure you use this if you use getline.
#include <string>

int main()
{
    //lets do some user input, we want to recive an input, then to print that input in the console
    //we will use cout << (to output)
    //we will use cin >> (for input)

    std::string name;
    int age;

    std::cout <<"What's your age? ";
    std::cin >>age;

    std::cout <<"Your age is " <<age << std::endl;

    //the issue is that if you add spaces it wont detect anything after the space :( but we can use the get line function, but the issue is that it takes the otehr output as input so we can fix it using >>std::ws
    std::cout <<"What's your name? ";
    std::getline(std::cin >> std::ws, name);
    std::cout <<"Your name is " << name <<  std::endl;

    
   


    return 0;
}