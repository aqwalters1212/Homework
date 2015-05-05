//  Adam Walters
//  CS372 Software Construction
//  May 1, 2015
//  Proxy.cpp


#include "Proxy.h"
#include <string>

using std::string;

Proxy::Proxy(): _account (std::make_shared<Account>())
{
    
}



string Proxy::getName()
{
    
    return _account->getName();
}

string Proxy::getGender()
{
    
    return _account->getGender();
}

string Proxy::getHobbies()
{
    
    return _account->getHobbies();
}

int Proxy::getAge()
{
    
    return _account->getAge();
}

int Proxy::pageViews()
{
    
    return _account->pageViews();
}

void Proxy::setName(string name)
{
    
    _account->setName(name);
}

void Proxy::setGender(string gender)
{
    
    _account->setGender(gender);
}

void Proxy::setHobbies(string hobbies)
{
    
    _account->setHobbies(hobbies);
}

void Proxy::setAge(int age)
{
    
    _account->setAge(age);
}
