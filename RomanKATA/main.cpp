
//Adam Walters
//CS372
//Roman Numeral KATA
//Program that handles Roman Numerals and uses TDD.
//Based on algorithm found at http://www.slideshare.net/JonJagger/larry-and-jen-do-roman-numerals-in-c

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "Catch.hpp"
#include <string>
#include <sstream>


using std::string;
using std::cout;
using std::endl;

string Converter(int number)
{
    return "I";
}

TEST_CASE( "Converter Function", "Convert" ) {
    REQUIRE( Converter(1) == "I");
    
    
}