#include "God.h"
using namespace std;

God::God() {}

Creature God::create_creature(string name, int id, int lifespan) {
	
	Creature new_creature = Creature(name, id, lifespan);
	count_creatures++;
	return new_creature;
}

Fish God::create_fish(string name, int id, int lifespan) {

	Fish new_fish = Fish(name, id, lifespan);
	count_fishes++;
	count_creatures++;
	return new_fish;
}

Fisherman God::create_fisherman(string name, int id, int lifespan) {

	Fisherman new_fisherman = Fisherman(name, id, lifespan);
	count_fishermans++;
	count_creatures++;
	return new_fisherman;
}