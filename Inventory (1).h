// Specification file for Inventory class.

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
#include <iostream>
using namespace std;

class Inventory
{   //Declaration of class attributes.
    private:  
        int checkInNumber; 
        std::string workDescription;
        std::string custPhone;
        float priceQuoted;
        
    public:
    //Declaration of class methods.
        Inventory();
        void setCheck(int);
        void setWork(std::string);
        void setPhone(std::string);
        void setPrice(float);
        
        int getCheck();
        std::string getWork();
        std::string getPhone();
        float getPrice();
        
        
};

#endif
