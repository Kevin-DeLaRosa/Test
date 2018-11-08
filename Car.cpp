// Kevin De La Rosa
// CECS 282 Lab 4 - Problem 1

#include "Car.h"

Car::Car(string m)
{
	model = m;
	owner = NULL;
	driver = NULL;
}
/* The original void Car::set_driver and void Car::set_owner functions did not work. The original did not set driver and owner equal to type Person*/

void Car::set_driver(Person *p)
{
	driver = p;
}

void Car::set_owner(Person *p)
{
	owner = p;
}

/* End of change */

void Car::print() const
{
	cout << "\nCar model: " << model;

	if (owner == NULL)
		cout << ", Owner = NULL ";
	else
	{
		cout << ", Owner = " << owner->get_Name();
		cout << ", Age = " << owner->get_Age();
	}

	if (driver == NULL)
		cout << ", Driver = NULL. ";
	else
	{
		cout << ", Driver = " << driver->get_Name();
		cout << ", Age = " << driver->get_Age() << "." << endl;
	}
}
