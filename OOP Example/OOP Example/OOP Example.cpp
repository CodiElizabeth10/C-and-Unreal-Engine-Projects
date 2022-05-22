// OOP Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
class Dog {
public:
    string Breed;
    string Color;
    string Behavior;
    int Height;
    int Weight;
};

    Dog dogObj;
    dogObj.Breed = "Hound";
    dogObj.Color = "Brown";
    dogObj.Behavior = "Shake, Sit, Laydown";
    dogObj.Height = 2;
    dogObj.Weight = 60;


    cout << dogObj.Breed << " " << "\n" << dogObj.Color << " " << "\n" << dogObj.Behavior << "\n" << dogObj.Height  << "  feet" << "\n" << dogObj.Weight << "  pounds" << "\n";
 
    return 0;
}
