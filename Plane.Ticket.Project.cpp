#include <iostream>
#include <thread> // Для std::this_thread::sleep_for
#include <chrono> // Для std::chrono::seconds
using namespace std;


void HelloFoo()
{
    cout << "Hello dear friend !" << endl;
    this_thread::sleep_for(chrono::seconds(2));  
    cout << "This program is simple for you to show useful functions in C++." << endl;
    cout << "By making simple program , like that "<< endl;
    cout << "This program is about plane ticket project." << endl;

    cout << "\nI hope you will like it." << endl;
}



int main()
{
HelloFoo();

    return 0;
}