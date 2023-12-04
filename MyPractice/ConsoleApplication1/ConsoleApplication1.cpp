

#include <iostream>
#include<conio.h>
#include "TestClass.h"
using namespace std;


int main()
{
    // Create a new Person object and set its properties
    TestClass person;
    person.Name = "John";
    person.Age = 30;

    // Call the SayHello method of the Person object
    person.SayHello();

    // Wait for user input before closing the console window
    std::cin.get();
}

