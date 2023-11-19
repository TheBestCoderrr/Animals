#pragma once
#include "String.h"
class Pet
{
public:
	Pet(String name, double weight, size_t age, String breed) : name(name), weight(weight), age(age), breed(breed) {}

	String getName() const { return name; }
	double getWeight() const { return weight; }
	size_t getAge() const { return age; }
	String getBreed() const { return breed; }
	void print() const { 
		cout << "Name: " << name; 
		cout << "Weight: " << weight << endl;
		cout << "Age: " << age << endl;
		cout << "Breed: " << breed;
	}
protected:
	String name;
	double weight;
	size_t age;
	String breed;
};

