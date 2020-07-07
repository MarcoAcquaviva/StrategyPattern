#include "Dog.h"
#include "BarkBehavior.h"

void Dog::MakeSound()
{
	barkBehavior->Bark();
}
