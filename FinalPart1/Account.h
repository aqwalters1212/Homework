//  Adam Walters
//  CS372 Software Construction
//  May 1, 2015
//  Account.h

#ifndef __ProxyPattern__Account__
#define __ProxyPattern__Account__


#include <stdio.h>
#include <string>
#include "AccountInterface.h"

using std::string;


class Account : public AccountInterface
{
public:
    
    Account();
    virtual string getName() override;
    virtual string getGender() override;
    virtual string getHobbies() override;
    virtual int getAge() override;
    virtual int pageViews() override;
    
    virtual void setName(string name) override;
    virtual void setGender(string gender) override;
    virtual void setHobbies(string hobbies) override;
    virtual void setAge(int age) override;
    
private:
    
    string name_;
    string gender_;
    string hobbies_;
    int age_;
    int views_;
};

#endif /* defined(__ProxyPattern__Account__) */
