#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string , int>> pairlist_t;

// typedef std::string text_t;
typedef int number_t;
typedef bool day;

//better readablity and a bit more clean, works the same though
using text_t = std::string;
using age = float;
int main()
{
    //typedef = resevred keywords used to create a alias for another type, can help with readablity
    //its so much cleaner than above!, its better using the using keyword though. I would only use it if there is a clear benifit like instead of writing this: std::vector<std::pair<std::string , int>> pairlist_t;
    pairlist_t pairlist;

    text_t firstname = "test";

    std::cout << firstname <<std::endl;

    age test = 14;

    day day = false;//we can also call them the same like this!



    return 0;
}