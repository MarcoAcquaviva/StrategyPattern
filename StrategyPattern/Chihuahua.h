#pragma once
#include "Dog.h"
class Chihuahua : public Dog
{
public:
	Chihuahua(BarkBehavior* _barkBehavior) : Dog(_barkBehavior, "Chihuahua") {}

};

