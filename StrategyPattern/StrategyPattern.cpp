
#include <iostream>
#include "Samoyed.h"
#include "Chihuahua.h"
#include "BigBadBark.h"
#include "AnnoyingBark.h"

int main()
{
    BarkBehavior* SamoyedBark = new BigBadBark();
    BarkBehavior* ChihuahuaBark = new AnnoyingBark();

    Animal* Slash = new Samoyed(SamoyedBark);
    Animal* LittleDevil = new Chihuahua(ChihuahuaBark);

    reinterpret_cast<Samoyed*>(Slash)->PrintRace();
    Slash->MakeSound();

    reinterpret_cast<Chihuahua*>(LittleDevil)->PrintRace();
    LittleDevil->MakeSound();
}