#include <iostream>
#include <thread> // ??? std::this_thread::sleep_for
#include <chrono> // ??? std::chrono::seconds
#include <string>
#include <cstdlib> // ??? std::srand, std::rand
using namespace std;


void HelloFoo()
{
    cout << "Hello dear friend !\n" << endl;
    this_thread::sleep_for(chrono::seconds(2));  
    cout << "This program is simple for you to show useful functions in C++." << endl;
        this_thread::sleep_for(chrono::seconds(2));  
    cout << "By making simple program , like that "<< endl;
    cout << "I want to show you about plane ticket project." << endl;
    this_thread::sleep_for(chrono::seconds(2));  
    cout << "\nI hope you will like it." << endl;
}



class PlaneTicket
{
public: 

int weight = 1;
int length =1;
char c = 64;

    string name;
    string surname;
    string destination;
    string date;
    double price;

    void displayTicketInfo()
    {
        cout << "Name: \t" << name << endl;
        cout << "Surname: \t" << surname << endl;
        cout << "Destination: \t" << destination << endl;
        cout << "Date: \t" << date << endl;
        cout << "Price: \t$" << price << endl;
    }


    void FillTicketInfo()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your surname: ";
        cin >> surname;
        cout << "Enter your destination: ";
        cin >> destination;
        cout << "Enter the date of flight (YYYY-MM-DD): ";
        cin >> date;
        cout << "Enter the price of the ticket: ";
        cin >> price;
    }



    void BookTicket()
    {
        cout << "Booking ticket for " << name << " " << surname << " to " << destination << " on " << date << "." << endl;
        cout << "Your ticket price is: $" << price << endl;
        cout << "Your ticket has been booked successfully!" << endl;
    }

    void CancelTicket()
    {
        cout << "Cancelling ticket for " << name << " " << surname << " to " << destination << " on " << date << "." << endl;
        cout << "Your ticket has been cancelled successfully!" << endl;
    }

    void Randomizer()
    {
        cout << "Randomly generating a ticket for you..." << endl;
        name = "John";
        surname = "Doe";
        destination = "New York";
        date = "2024-12-25";
        price = 499.99;
    }




    void PlaneRandomizer()
    {
        length = rand() % 25 + 1;                                               // Random length between 1 and 25 for the plane
        weight = rand() % 3 + 1;   
        cout <<"\n\n-----Plane Planner---------------\n";

        cout <<"\n\n\n" << "-/\\-"<<endl;                                       //Nose of the plane

        for (int i=0; i< length; i++)
        {
            for(int j=0; j< weight; j++)
            {
        c = c +1 ;
        if(c>90)
        {
            c = 65;
        }
        if(length >10)
        {
            cout <<"|_"<<i <<" "<< c <<"_|\t";
cout << endl;
               cout <<"|" ;
            

            if(weight == 1)
            {
                  cout <<"------|\n"; 
            }
            else if(weight == 2)
            {
                  cout <<"-------------|\n"; 
            }
            else if(weight == 3)
            {
                  cout <<"---------------------|\n"; 
            }  
        
            






        else if (length <=10 && length > 0)
        {

        cout <<"|_"<<i << c <<"_|\t";
        
            
            cout << endl;

            if(length >= 1)
            {
                  cout <<"|" ;
            }

            if(weight == 1)
            {
                  cout <<"----|\n"; 
            }
            else if(weight == 2)
            {
                  cout <<"------------|\n"; 
            }
            else if(weight >= 3)
            {
                  cout <<"---------------------|\n"; 
            }  
        }




    }

        }
        }
    }
};



int main()
{
//HelloFoo();
srand(time(NULL));

PlaneTicket ticket1;
ticket1.PlaneRandomizer();

return 0;
}
