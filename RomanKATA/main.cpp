
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
    string romannum = "";
    if(number >= 1)
    {
        romannum += "I";
    }
    else if(number >= 2 )
    {
        romannum += "I";
    }
    else if (number >= 3)
    {
        romannum += "I";
    }
        return romannum;
    
}

TEST_CASE( "Converter Function", "Convert" ) {
    REQUIRE( Converter(0) == "");
    REQUIRE( Converter(1) == "I");
    REQUIRE( Converter(2) == "II");
    REQUIRE( Converter(3) == "III");
    
    
}