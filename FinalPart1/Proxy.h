//  Adam Walters
//  CS372 Software Construction
//  May 1, 2015
//  Proxy.h


#ifndef __ProxyPattern__Proxy__
#define __ProxyPattern__Proxy__


#include <stdio.h>
#include <memory>
#include "AccountInterface.h"
#include "Account.h"

class Proxy: public AccountInterface
{
    public:
    
        Proxy();
        virtual string getName() override;
        virtual string getGender() override;
        virtual string getHobbies() override;
        virtual int getAge() override;
        virtual int pageViews() override;
    
        virtual void setName(string name) override;
        virtual void setGender(string gender) override;
        virtual void setHobbies(string hobbies) override;
        virtual void setAge(int age) override;
    
        virtual ~Proxy()=default;
    
    private:
        std::shared_ptr<Account> _account;
    
    
};

#endif /* defined(__ProxyPattern__Proxy__) */
