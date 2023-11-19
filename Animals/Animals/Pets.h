#pragma once
#include "Pet.h"
class Dog : public Pet 
{
public:
	Dog(String name, double weight, size_t age, String breed, String wool) : Pet(name, weight, age, breed), wool(wool) {}
	void print() const {
		Pet::print();
		cout << "Wood: " << wool;
	}
private:
	String wool;
};

class Cat : public Pet 
{
public:
	Cat(String name, double weight, size_t age, String breed, String wool) : Pet(name, weight, age, breed), wool(wool) {}
	void print() const {
		Pet::print();
		cout << "Wood: " << wool;
	}
private:
	String wool;
};

class Parrot : public Pet
{
public:
	Parrot(String name, double weight, size_t age, String breed, String feathers) : Pet(name, weight, age, breed), feathers(feathers) {}
	void print() const {
		Pet::print();
		cout << "Feathers: " << feathers;
	}
private:
	String feathers;
};

