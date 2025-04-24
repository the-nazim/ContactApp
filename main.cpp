#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Contact
{
    private:
        string name;
        string phoneNumber;
    
    public:
        Contact()
        {
            name = "Unknown";
            phoneNumber = "000-000-0000";
        }
        void get_contacts()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter phone number: ";
            cin>>phoneNumber; 
        }
        void show_contacts()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Phone Number: "<<phoneNumber<<endl;
        }
};

int main()
{
    Contact c;
    c.get_contacts();
    c.show_contacts();
    return 0;
}