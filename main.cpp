#include<iostream>
using namespace std;

class Car
{
public:
	double x;
	double v;
	int p;
	Car();
};
Car::Car()
{
	x = 0.5;
	v = 1.5;
	p = 2;
}
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Vivod avto: " << endl;
	Car car;
	cout << "X: " << car.x << endl;
	cout << "V: " << car.v << endl;
	cout << "P: " << car.p << endl;

	
}
