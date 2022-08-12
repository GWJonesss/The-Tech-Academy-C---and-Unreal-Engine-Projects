#include <iostream>
using namespace std;


char letter = 'A';

int age = 29;

const double number = 2.5;

bool isagamedev = true;

string thing = "this is a string";

int x;

float myNum = 5.75;

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


void myFunction() {
	cout << "I just got executed!\n";
}
/* This is a mutiline comment 
to say that the main function is below */

int main()
{

   myFunction();

   string food = "Pizza";

   cout << &food << "\n"; 
   string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
   for (int i = 0; i < 4; i++) {
	   cout << cars[i] << "\n";
   }
   
	
   cout << "The length of the txt string is: " << txt.length() << "\n";
   cout << fullName << "\n";
   cout << myNum << "\n";
   cout << "Hello World!\n\n";
   cout << "This is some extra text\n";
   cout << letter << "\n" << age << "\n" << number << "\n" << isagamedev << "\n" << thing << "\n";
   cout << "type a number please: ";
   cin >> x;
   cout << "your number was: " << x;

   int time = 20;
   string result = (time < 18) ? "Good day." : "Good evening.";
   cout << result;

}

