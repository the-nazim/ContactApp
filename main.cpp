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
            contact[phoneNumber] = name;
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
        void search_contact();
};

void PhoneBook::search_contact()
{
    string number;
    cout<<"Enter the number: ";
    cin>>number;
    auto it = contact.find(number);
    if(it != contact.end())
    {
        cout<<"Contact info: "<<endl;
        cout<<"Name: "<<it->second<<endl;
        cout<<"Phone Number: "<<it->first<<endl;
    }
    else
        cout<<"No contact info"<<endl;
}

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
    pb.search_contact();
    return 0;
}