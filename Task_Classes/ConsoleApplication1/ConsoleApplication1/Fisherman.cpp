#include "Fisherman.h"
#include "Fish.h"

Fisherman::Fisherman(string name, int id, int lifespan) : Creature(name, id, lifespan) {};

void Fisherman::move() {

	cout << "I'm walking" << endl;

}

void Fisherman::speak() {

	cout << "I'm fisherman!" << endl;

}

//void Fisherman::catch_fish(Fish** fish) {
//
//	cout << "I've caught " << (*fish)->get_name << endl;
//}