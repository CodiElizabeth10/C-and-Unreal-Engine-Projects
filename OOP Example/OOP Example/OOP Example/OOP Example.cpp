#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string dogbreed;
    string dogcolor;
    double dogheight;
    double dogweight;

public:
    Dog(string breed, string color, double height, double weight) {
        dogbreed = breed;
        dogcolor = color;
        dogheight = height;
        dogweight = weight;
    }


    void Shake() {
        cout << "Shake with your paw!" << "\n";
    }
    void Sit() {
        cout << "Use your hind legs to so sit!" << "\n";
    }
    void LayDown() {
        cout << "You can laydown on your back!" << "\n";
    }

};

int main()
{
    Dog Copper("German Shepherd", "Black and Tan", 1.2, 75.9);

    Copper.Shake();

    Copper.Sit();

    Copper.LayDown();

}

