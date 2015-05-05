//  Adam Walters
//  CS372 Software Construction
//  May 1, 2015
//  AccountInterface.h

#ifndef __ProxyPattern__AccountInterface__
#define __ProxyPattern__AccountInterface__


#include <stdio.h>
#include <string>

using std::string;

class AccountInterface
{
    
    public:
    
        virtual string getName() =0;
        virtual string getGender() =0;
        virtual string getHobbies() =0;
        virtual int getAge() =0;
        virtual int pageViews() =0;
    
        virtual void setName(string name) =0;
        virtual void setGender(string gender) =0;
        virtual void setHobbies(string hobbies) =0;
        virtual void setAge(int age) =0;

    
        virtual ~AccountInterface()= default;
    
    private:

};
#endif /* defined(__ProxyPattern__AccountInterface__) */
