#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class PhoneBook
{
    private:
        string name;
        string phoneNumber;
        map<string, string> contact;
    
    public:
        PhoneBook()
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
            contact[name] = phoneNumber;
        }
        void show_contacts()
        {
            // cout<<"Name: "<<name<<endl;
            // cout<<"Phone Number: "<<phoneNumber<<endl;
            for(auto i: contact)
            {
                cout<<"Name: "<<i.first<<endl;
                cout<<"Phone Number: "<<i.second<<endl;
            }
        }
};

int main()
{ 
    PhoneBook pb;
    bool flag = true;
    while(flag)
    {
        char ch;
        pb.get_contacts();
        cout<<"Do you want to add more (Y/n)? ";
        cin>>ch;
        if(ch=='n' || ch=='N')
            flag=false;
    }
    pb.show_contacts();
    return 0;
}