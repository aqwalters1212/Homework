//  Adam Walters
//  CS372 Software Construction
//  May 1, 2015
//  Account.cpp

#include "Account.h"
#include <string>

using std::string;

Account::Account()
{
    
}

string Account::getName()
{
    
    return name_;
}

string Account::getGender()
{
    
    return gender_;
}

string Account::getHobbies()
{
    
    return hobbies_;
}

int Account::getAge()
{
    
    return age_;
}

int Account::pageViews()
{
    
    return views_;
}

void Account::setName(string name)
{
    
    name_=name;
}

void Account::setGender(string gender)
{
    
    gender_=gender;
}

void Account::setHobbies(string hobbies)
{
    
    hobbies_=hobbies;
}

void Account::setAge(int age)
{
    
    age_=age;
}
