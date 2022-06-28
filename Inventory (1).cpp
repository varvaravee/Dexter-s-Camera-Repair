// Member function definitions.

#include "Inventory.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

Inventory::Inventory()  //Constructor definition
{
    checkInNumber=0;
    workDescription=" ";
    custPhone=" ";
    priceQuoted=0.0;
}



void Inventory::setCheck(int checkInNumber)
{ 
    if (checkInNumber<=0) //Second layer of data validation.
     { cout<<"ERROR: You did not enter a positive integer.\n";
       exit(EXIT_FAILURE);
     }
    
     this->checkInNumber=checkInNumber;
}  

int Inventory::getCheck()
{ 
    return checkInNumber;
}

void Inventory::setWork(std::string workDescription)
{
    if (workDescription.size()>=30) //Second layer of data validation.
    {  cout<<"ERROR: You entered more than 29 characters.\n";
       exit(EXIT_FAILURE);
    }
    this-> workDescription=workDescription;
}

std::string Inventory::getWork()
{
    return workDescription;
}

void Inventory::setPhone(std::string custPhone)
{
    if (custPhone.size()>=11) //Second layer of data validation.
    { cout<< "ERROR: You entered more than 10 characters.\n ";
      exit(EXIT_FAILURE);
    }
    this-> custPhone=custPhone;
}

std::string Inventory::getPhone()
{
    return custPhone;
}

void Inventory::setPrice(float priceQuoted)
{
     if (priceQuoted<0) //Second layer of data validation.
     { cout<<"ERROR: You did not enter an integer more than or equal to 0.\n";
       exit(EXIT_FAILURE);
     }
    
     this->priceQuoted=priceQuoted;
}

float Inventory::getPrice()
{
    return priceQuoted;
}