//  Adam Walters
//  CS372 Software Construction
//  May 1, 2015
//  This program implements the proxy design pattern. The proxy class implements the same methods as the Account class so
//  the proxy can control access to data.
//  main.cpp


#include<iostream>
#include "Account.h"
#include "Proxy.h"
#include "AccountInterface.h"
#include <string>


using std::string;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    
    
    Proxy *first = new Proxy;
    first->setName("Adam");
    first->setGender("male");
    first->setHobbies("skateboarding");
    first->setAge(5);
    cout<< first->pageViews() << endl;
    cout<< first->pageViews() << endl;
    cout << first->getName() << endl;
    cout << first ->getGender() << endl;
    cout << first ->getHobbies() << endl;
    cout << first->getAge() << endl;
    delete first;
}
