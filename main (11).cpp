/* Varvara Vorobieva
* Chapter 13 Assignment
*CISC 187
* 3/29/2022
*/

#include <iostream>
#include "Inventory.h"
#include <string>
#include <iomanip>

using namespace std;

const int ARRAYSIZE=5;

int main()
{
   Inventory arrayone[ARRAYSIZE];  //Declares array of objects of Inventory class.
   
   //Loop assigns each argument in each object(5) the user's input. This creates an array of 5 objects.
   
   for (int n=0; n<ARRAYSIZE; n++)
   {
       int checkInNumber=0;
       string workDescription=" ";
       string custPhone=" ";
       float priceQuoted=0.0;
       
       
       
       cout << "What is your check in number? \n";
       cin >> checkInNumber;
       cout<<endl;
       while (checkInNumber<=0) //First level of data validation.
       {
            cout << "You did not enter a valid number. Please enter a positive integer.\n";
            cin >> checkInNumber;
       }
       arrayone[n].setCheck(checkInNumber);
       
       
       cout << "Give a brief description of your repairs. (Less than 30 characters). \n";
       cin.ignore();
       getline(cin,workDescription);
       cout<<endl;
       while (workDescription.size()>= 30) //First level of data validation.
       {
           cout << "You did not enter a valid description. Please keep your description to less than 30 characters.\n";
           cin >> workDescription;
       }
       arrayone[n].setWork(workDescription);
       
       
       cout << "Please provide your phone number. (Less than 11 characters).\n";
       cin >> custPhone;
       cout<<endl;
       while (custPhone.size()>=11) //First level of data validation.
       {
           cout << "You did not enter a valid description. Please keep your description to less than 11 characters.\n";
           cin >> custPhone;
       }
       arrayone[n].setPhone(custPhone);
       
      
       cout << "Please provide the quoted price for your repairs. (Any positive number, or 0). \n";
       cin >> priceQuoted;
       cout<<endl;
       while (priceQuoted<0) //First level of data validation.
       {
           cout << "You did not enter a valid price. Please enter a positive number or 0.\n";
           cin >> priceQuoted;
       }
       arrayone[n].setPrice(priceQuoted);
       
   }

cout<<"Dexter's Camera Repair\n";
cout<<endl;

float totalPrice=0; // Total price for all repairs. 

for (int t=0; t<ARRAYSIZE; t++)
{
    cout << "Check in Number:                 "<<arrayone[t].getCheck()<< endl;
    cout << "Job Description:                 "<<arrayone[t].getWork()<< endl;
    cout << "Customer's Phone Number:         "<<arrayone[t].getPhone()<<endl;
    cout << "Quoted Price:                   $"<<fixed<<setprecision(2)<<arrayone[t].getPrice()<<endl;
    totalPrice+=arrayone[t].getPrice();
    cout <<endl;
}
   
 cout << "*******************************************"<<endl;
 cout <<endl;
 cout <<endl;
 cout << "Total Price:                       $" << fixed << setprecision(2)<< totalPrice << endl;
 
   
   return 0;
}