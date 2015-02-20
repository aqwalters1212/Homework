
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

struct dig
{
    int arabicnum;
    string romannumber;
};

const dig Digits[] =
{
    {100,"C"},
    {100,"X"},
    {100,"I"},
};

string Converter(int number)
{
    string romannum = "";
    while( number >= 100)
    {
        romannum += "C";
        number-= 100;
    }
    while( number >= 10)
    {
        romannum += "X";
        number-= 10;
    }
    while(number >= 1)
    {
        romannum += "I";
        number--;
    }
    
    return romannum;
    
}

TEST_CASE( "Converter Function", "Convert" ) {
    REQUIRE( Converter(0) == "");
    REQUIRE( Converter(1) == "I");
    REQUIRE( Converter(2) == "II");
    REQUIRE( Converter(3) == "III");
    REQUIRE( Converter(10) == "X");
    REQUIRE( Converter(20) == "XX");
    REQUIRE( Converter(30) == "XXX");
    REQUIRE( Converter(33) == "XXXIII");
    REQUIRE( Converter(100) == "C");
    
    
}