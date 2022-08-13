// CCSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



// base class
class Shape {
public:

    string Color;
    
    int getArea()
    {
        
    }
    
    
};

// Rectangle sub class derived from a single Shape base class
class Rectangle : public Shape {
public:

    int height;
    int width;
    int getArea()
    {
        float area = height * width;
        cout << "The Area Is: " << area << endl;
        return 0;
    }
};

// Triangle sub class derived from a single Shape base class
class Triangle : public Shape {
public:

    int height;
    int base;
    int getArea()
    {
        float area = height * base * .5;
        cout << "The Area Is: " << area << endl;
        return 0;
    }

};
// Rectangle sub class derived from a single Shape base class
class Circle : public Shape {
public:

    int radius;
    
    int getArea()
    {
        float area = radius * radius * 3;
        cout << "The Area Is: " << area << endl;
        return 0;
    }
    

};

// main function
int main()
{
    // Creating object of Rectangle sub class will
    // invoke the constructor of Shape base class
    Rectangle rect1;

    rect1.Color = "green";
    rect1.height = 5;
    rect1.width = 3;
    cout << "Rectangle Data:\n";
    cout << "Color: " << rect1.Color << "\n";
    cout << "Height: " << rect1.height << "\n";
    cout << "Width: " << rect1.width << "\n";
    rect1.getArea();
    cout <<"\n";

   // Creating object of Triangle sub class will
   // invoke the constructor of Shape base class
    Triangle tri1;

    tri1.Color = "blue";
    tri1.height = 5;
    tri1.base = 4;
    cout << "Triangle Data:\n";
    cout << "Color: " << tri1.Color << "\n";
    cout << "Height: " << tri1.height << "\n";
    cout << "Base: " << tri1.base << "\n";
    rect1.getArea();
    cout << "\n";

   // Creating object of Circle sub class will
   // invoke the constructor of Shape base class
    Circle cir1;

    cir1.Color = "red";
    cir1.radius = 2;
    
    cout << "Circle Data:\n";
    cout << "Color: " << cir1.Color << "\n";
    cout << "Radius: " << cir1.radius << "\n";
    cir1.getArea();
    cout << "\n";




    return 0;
}