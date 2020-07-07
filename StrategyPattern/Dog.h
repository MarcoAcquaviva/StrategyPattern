#pragma once
#include "Animal.h"
#include <string>
#include <iostream>

class BarkBehavior;

class Dog : public Animal
{

public:
	Dog(const Dog&) = delete;
	Dog(Dog&&) = delete;
	Dog(BarkBehavior* _barkBehavior, std::string _race) : barkBehavior{ _barkBehavior }, race{_race} {};
	Dog& operator=(const Dog&) = delete;
	Dog& operator=(Dog&&) = delete;

	void MakeSound() override;
	inline void PrintRace() { std::cout << race << std::endl; }

private:
	BarkBehavior* barkBehavior;

private:
	std::string race;



};

