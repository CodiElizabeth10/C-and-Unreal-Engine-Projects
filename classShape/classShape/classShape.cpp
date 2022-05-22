#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:

	string color;

	virtual void getArea() {
		cout << "Shape Area" << endl;
	}


public:
	string m_color;
};

class Rectangle : public Shape
{
public:
	int height = 10;
	int width = 5;



	void getArea() {
		cout << "Rectangle area ";
		cout << height * width;

	}
};

class Triangle : public Shape
{
public:
	int height = 55;
	int base = 10;



	void getArea() {
		cout << "\n Traingle area ";
		cout << height * base * 10;

	}
};

class Circle : public Shape
{
public:

	int radius = 50;



	void getArea() {
		cout << "\n circle radius is ";
		cout << radius * radius * 3.14;

	}
};

int main()
{
	Rectangle rect1;
	Triangle tri1;
	Circle circ1;

	rect1.color = "Orange";
	tri1.color = "Pink";
	circ1.color = "Lime";




	rect1.getArea();

	tri1.getArea();

	circ1.getArea();

	cout << "\n rectangle color  " + rect1.color;
	cout << "\n triangle color is " + tri1.color;
	cout << "\n circle color is " + circ1.color;



}