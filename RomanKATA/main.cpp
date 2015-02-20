
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
    {10,"X"},
    {1,"I"},
};

string Converter(int number)
{
    string romannum = "";
    while( number >= Digits[0].arabicnum)
    {
        romannum += Digits[0].romannumber;
        number-= Digits[0].arabicnum;
    }
    while( number >= Digits[1].arabicnum)
    {
        romannum += Digits[1].romannumber;
        number-= Digits[1].arabicnum;
    }
    while(number >= Digits[2].arabicnum)
    {
        romannum += Digits[2].romannumber;
        number -= Digits[2].arabicnum;
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