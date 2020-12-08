#include "Fish.h"


Fish::Fish(string name, int id, int lifespan) : Creature(name, id, lifespan) {};

void Fish::move() {

	cout << "I'm swimming" << endl;

}

void Fish::speak() {

	cout << "Fish can't speak!" << endl;

}