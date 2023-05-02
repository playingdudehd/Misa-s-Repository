//Design a class named PersonData with the following member variables
//1. lastName   2. firstName  3. address  4. city  5. state  6. zip  7. phone
//write the appropriate accessor and mutator functions for these member variables
//Next, design a class named CustomerData, which is derived from the PersonData class.
//The CustomerData class should have the following member variables: 1. customerNumber
//2. mailingList
//The customerNumber variable will be used to hold a unique integer for each customer.
//The mailingList variable should be a bool. It will be set to true if the customer
//wishes to be on a mailing list, or false if the customer does not wish to be on a
//mailing list. Write appropriate accessor and mutator function for these memebr variables.
//Demonstrate an object of the CustomerData class in a simple program.
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class PersonData
{
    public:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    int phone;
    PersonData(string a, string b, string c, string d, string e, int f, int g){
        lastName = a;
        firstName = b;
        address = c;
        city = d;
        state = e;
        zip = f;
        phone = g;
    }

};
class CustomerData : public PersonData
{
    public:
    int customerNumber;
    bool mailingList;
    void PrintInfo() const
    {
        cout << "Full Name:" << lastName << " " << firstName << "\n" << "Address:" << address << "\n"
        << "City:" << city << "\n" << "State:" << state << "\n" << "ZipCode:" << zip << "\n" << "PhoneNumber:" << phone << "\n";
    }
    CustomerData(int h, bool i) : PersonData(h, i)
    {
        customerNumber = h;
        mailingList = i;
    }
};

void addinfo(string *a, string info)
{
    *a = info;
}

int main()
{
    PersonData p1("", "", "", "", "", 0, 0);
    CustomerData c1;
    string info, info2;
    int num;
    cout << "Please Enter youre LastName FirstName: ";
    cin >> info >> info2;
    addinfo(&p1.lastName, info);
    addinfo(&p1.firstName, info2);
    cout << "Please Enter your Address: ";
    cin >> info;
    addinfo(&p1.address, info);
    cout << "Enter your city: ";
    cin >> info;
    addinfo(&p1.city, info);
    cout << "Please Enter your State: ";
    cin >> info;
    addinfo(&p1.state, info);
    cout << "Please Enter your ZipCode: ";
    cin >> num;
    p1.zip = num;
    cout << "Please Enter your phone number: ";
    cin >> num;
    p1.phone = num;

    srand((unsigned) time(NULL));
    int random = rand();
    c1.customerNumber = random;
    cout << "Would you like to be a part of the mailing List? Yes or No: ";
    cin >> info;
    if(info == "Yes" || info == "yes" || info == "Y" || info == "y")
    {
        c1.mailingList = true;
    }
    else if(info == "NO" || info == "no" || info == "N" || info == "n")
    {
        c1.mailingList = true;
    }
    

    
    return 0;
}