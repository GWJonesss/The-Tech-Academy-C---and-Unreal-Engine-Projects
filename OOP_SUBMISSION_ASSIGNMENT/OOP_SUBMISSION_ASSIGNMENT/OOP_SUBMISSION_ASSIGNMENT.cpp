// OOP_SUBMISSION_ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;


class Pet {       // The class
public:    
    string Breed;
    string Color;
    string Height;
    string Weight;
    

    //methods
public: void Shake() {
        cout << "The Pet Can Shake"<< endl;
       
    }
public: void Sit() {
        cout << "The Dog Can Sit" << endl;

    }
public: void LayDown() {
        cout << "The Dog Can Lay Down" << endl;

    }

};

int main() {
    Pet mypet;  // Create an object of MyClass

    // Access attributes and set values
    mypet.Breed = "Hound";
    mypet.Color = "Brown";
    mypet.Height = "2 Feet";
    mypet.Weight = "60 pounds";

    // Print attribute values
    cout << "Info About My Pet:\n";
    cout << mypet.Breed << "\n";
    cout << mypet.Color << "\n";
    cout << mypet.Height << "\n";
    cout << mypet.Weight << "\n";
    cout << "\n";

    // Use Methods

    cout << "Tricks That The Pet Knows:\n";
    mypet.Shake();
    mypet.Sit();
    mypet.LayDown();

    return 0;

    
}