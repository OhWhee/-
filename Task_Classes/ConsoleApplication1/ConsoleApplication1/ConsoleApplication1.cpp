#include <iostream>
#include "Creature.h"
#include "Fish.h"
#include "Fisherman.h"
#include "God.h"
using namespace std;

int main()
{
	God newGod = God();

	Fisherman fisherman1 = newGod.create_fisherman("Boris", 2, 100);
	fisherman1.move();
	fisherman1.speak();

	Fish fish1 = newGod.create_fish("Freddy", 3, 1);
	Fish fish2 = newGod.create_fish("Nemo", 4, 1);
	fish1.move();
	fish1.speak();


	newGod.show_creatures();
	newGod.show_fishes();
	newGod.show_fishermans();


}
