#include "Creature.h"


Creature::Creature(string name, int id, int lifespan) {

	set_name(name);
	set_id(id);
	set_lifespan(lifespan);
}

void Creature::move() {

	cout << "I'm moving somehow!" << endl;

}

void Creature::speak() {

	cout << "I'm CRRRREATURE!" << endl;

}
