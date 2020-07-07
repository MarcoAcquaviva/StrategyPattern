#pragma once
#include "Dog.h"

class Samoyed : public Dog
{
public:
	Samoyed(BarkBehavior* _barkBehavior) : Dog(_barkBehavior,"Samoyed"){}
};

