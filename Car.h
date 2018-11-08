// Kevin De La Rosa
// CECS 282 Lab 4 - Problem 1

#pragma once
#ifndef __CAR_H_INCLUDED__
#define __CAR_H_INCLUDED__

#include "Person.h"

class Car
{
	string model;
	Person *owner;
	Person *driver;

public:
	Car(string m);
	void set_driver(Person *);
	void set_owner(Person *);
	void print() const;
};

#endif
