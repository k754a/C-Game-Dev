#include <iostream>

namespace first{
    int x = 1;
}


int main()
{
    using std::string;
    
    //name space provides a soultion for naming conflexts like in larger projects, this allows = identical names as long as the name space is diffrent
    int x = 0;

    //cant create the same varable x
    //int x = 1;

    //but we can make a namespace

    std::cout << x << std::endl; //will get the local one

    std::cout <<first::x << std::endl; //will get the namespace one.


    //we can use "using namespace first;" , this will make it so we don't have to write out as much :)

    //instead of wring std::string if we use using namespace std; it does that for us, but it could get problimatic becase of missnaming, so we could use using std::cout; or std::string;

    string test = "test";


    return 0;
}