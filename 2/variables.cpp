#include <iostream> //same things basicly, but now we got vars

int main()
{
    // to set a var we need to first get its data type like int or float, lets do numbers, so its int, <Name>; or you can = to something like "int test = 1;"
    int a;
    int b = 6;
    int sum;
    
    //we can set it like python or unity
    a=1;
    //lets display it we can use standered output
    //its like Print(a), or like Debug.Log(a), really basic standered output, Character output, << (var), we can add things onto it like print(a,b) or Debug.Log(a + b) by << (var), it combines them together
    std::cout<< a << b <<std::endl;

    //i can add things together aswell.
    std::cout<< b+b <<std::endl;

    //we could also go
    sum = a+b;

    std::cout<<sum <<std::endl;



    //we can do other data types too.

    //ints, whole numbers ex, 1 3 4, cannot hold decimals like 3.1415, or 0.1, but insted of erroring it truncates it, where it just removes of the decimal
    int age = 14;
    int year = 2024;
    int days = 3.3; 
    std::cout<<days <<std::endl;

    //a double can store both whole and decimal numbers like 0.3 and 4, does not remove decimal
    double price = 1.87;
    double grade = 98.3;
    double temp = 20;

    std::cout<<grade <<std::endl;

    //Char, stores a single character, if there is more than one, everyone but the last letter will be removed, kind of like the int, you must use '' instead of "" because it is singular.
    //it can also hold symbols
    char quality = 'A';
    char badchar = 'AA';
    char symbol = '%';
    std::cout <<badchar <<std::endl;
    std::cout <<symbol <<std::endl;
    
    //bools stores true and false only, if its not a bool, it will defalt true.
    bool day = true;
    bool night = 'f';

    std::cout <<night <<" test" <<std::endl;

    //strings can store hundreds of lines of text like the char data type bu we can store more than one, but strings are diffrent when calling them, it has to have "" not ''
    std::string letters = "ABCD";
    std::string Month = "April";

    std::cout <<letters <<std::endl;

    //dispaly 2 varables together
    std::cout <<"It is " << Month << ". We can display several lines or spots." << " It's like the , in python when you want to print!";
   
    

    return 0;
}